import pyrealsense2 as rs
import numpy as np
import cv2

# Global variable to store the clicked point (x, y) on the color image
# and the corresponding depth value
clicked_point_info = None

# Mouse callback function
def mouse_callback(event, x, y, flags, param):
    """
    Handles mouse events.
    If a left-button click occurs on the color image part of the window,
    it stores the (x, y) coordinates.
    """
    global clicked_point_info
    # param should contain {'color_width': width_of_color_image,
    #                      'depth_image': current_depth_image_numpy_array,
    #                      'depth_scale': camera_depth_scale}

    if event == cv2.EVENT_LBUTTONDOWN:
        color_width = param.get('color_width', 0)
        current_depth_image = param.get('depth_image', None)
        current_depth_scale = param.get('depth_scale', 1.0) # Default to 1 if not found

        if 0 <= x < color_width: # Click is within the color image region
            if current_depth_image is not None:
                # Ensure y, x are within the bounds of the depth image
                if 0 <= y < current_depth_image.shape[0] and 0 <= x < current_depth_image.shape[1]:
                    depth_value_raw = current_depth_image[y, x]
                    depth_in_meters = depth_value_raw * current_depth_scale
                    clicked_point_info = {"coords": (x, y), "depth_raw": depth_value_raw, "depth_meters": depth_in_meters}
                    print(f"Clicked on COLOR image at pixel: ({x}, {y})")
                    print(f"  Raw depth value: {depth_value_raw}, Depth in meters: {depth_in_meters:.3f} m")
                else:
                    clicked_point_info = {"coords": (x, y), "depth_raw": -1, "depth_meters": -1}
                    print(f"Clicked on COLOR image at pixel: ({x}, {y}) - (Depth out of bounds)")
            else:
                clicked_point_info = {"coords": (x, y), "depth_raw": -1, "depth_meters": -1}
                print(f"Clicked on COLOR image at pixel: ({x}, {y}) - (Depth image not available)")
        else:
            # Click was on the depth colormap or outside
            # You could add logic here if you want to handle clicks on the depth_colormap part
            print(f"Clicked outside color image region at window coordinates: ({x}, {y})")
            clicked_point_info = None # Reset if clicked outside the color image


def main():
    global clicked_point_info # Allow main to clear/use it

    # Configure depth and color streams
    pipeline = rs.pipeline()
    config = rs.config()

    # Get device product line for setting a supported resolution
    pipeline_wrapper = rs.pipeline_wrapper(pipeline)
    pipeline_profile = config.resolve(pipeline_wrapper)
    device = pipeline_profile.get_device()
    device_product_line = str(device.get_info(rs.camera_info.product_line))

    found_rgb = False
    for s in device.sensors:
        if s.get_info(rs.camera_info.name) == 'RGB Camera':
            found_rgb = True
            break
    if not found_rgb:
        print("The demo requires Depth camera with Color sensor")
        exit(0)

    # Define desired resolution and FPS
    depth_width, depth_height, depth_fps = 640, 480, 30
    color_width, color_height, color_fps = 640, 480, 30 # Make sure this matches depth if aligning

    try:
        config.enable_stream(rs.stream.depth, depth_width, depth_height, rs.format.z16, depth_fps)
    except RuntimeError as e:
        print(f"Could not enable depth stream ({depth_width}x{depth_height}): {e}")
        print("Trying a different depth configuration or check camera connection.")
        return

    try:
        config.enable_stream(rs.stream.color, color_width, color_height, rs.format.bgr8, color_fps)
    except RuntimeError as e:
        print(f"Could not enable color stream ({color_width}x{color_height}): {e}")
        print("Trying a different color configuration or check camera connection.")
        return

    # Start streaming
    try:
        profile = pipeline.start(config)
    except RuntimeError as e:
        print(f"Error starting pipeline: {e}")
        print("Is the RealSense camera connected and not in use by another application?")
        return

    depth_sensor = profile.get_device().first_depth_sensor()
    depth_scale = depth_sensor.get_depth_scale()
    print(f"Depth Scale is: {depth_scale}")

    clipping_distance_in_meters = 1
    clipping_distance = clipping_distance_in_meters / depth_scale

    align_to = rs.stream.color
    align = rs.align(align_to)

    print("Streaming started. Press 'q' to quit. Click on the color image to get pixel info.")

    # Create window and set mouse callback
    window_name = 'RealSense Feed'
    cv2.namedWindow(window_name, cv2.WINDOW_AUTOSIZE)

    # This dictionary will be passed to the callback
    # It's updated in the loop with the current depth data
    mouse_callback_params = {
        'color_width': color_width, # Assuming color_width is fixed as per config
        'depth_image': None,
        'depth_scale': depth_scale
    }
    cv2.setMouseCallback(window_name, mouse_callback, mouse_callback_params)


    try:
        while True:
            frames = pipeline.wait_for_frames()
            aligned_frames = align.process(frames)

            aligned_depth_frame = aligned_frames.get_depth_frame()
            color_frame = aligned_frames.get_color_frame()

            if not aligned_depth_frame or not color_frame:
                print("Frames not available. Skipping...")
                continue

            depth_image = np.asanyarray(aligned_depth_frame.get_data())
            color_image_raw = np.asanyarray(color_frame.get_data()) # Use a copy for drawing

            # Update the depth image in the parameters for the mouse callback
            mouse_callback_params['depth_image'] = depth_image
            mouse_callback_params['color_width'] = color_image_raw.shape[1] # Get actual width

            # Create a copy of the color image to draw on, so original is not modified
            color_image_display = color_image_raw.copy()

            # --- Visualization of clicked point ---
            if clicked_point_info and "coords" in clicked_point_info:
                px, py = clicked_point_info["coords"]
                depth_m = clicked_point_info.get("depth_meters", -1)

                # Draw a circle on the display image
                cv2.circle(color_image_display, (px, py), 5, (0, 255, 0), -1)
                # Put text with depth info
                text = f"({px},{py}) D: {depth_m:.2f}m"
                cv2.putText(color_image_display, text, (px + 10, py - 10),
                            cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 1, cv2.LINE_AA)
                # You might want to reset clicked_point_info here if you only want it to show for one frame
                # clicked_point_info = None # Uncomment if you want click info to disappear after one frame

            colorizer = rs.colorizer()
            # Configure colorizer for better visualization
            # colorizer.set_option(rs.option.visual_preset, rs.rs2_l500_visual_preset.RS2_L500_VISUAL_PRESET_MAX_RANGE) # Example for L500
            # colorizer.set_option(rs.option.color_scheme, 2) # 2 for JET, 0 for classic
            colorizer.set_option(rs.option.min_distance, 0.1) # min distance in meters
            colorizer.set_option(rs.option.max_distance, 6.0) # max distance in meters (adjust as needed)

            depth_colormap = np.asanyarray(colorizer.colorize(aligned_depth_frame).get_data())

            # Stack images horizontally for display
            images = np.hstack((color_image_display, depth_colormap))

            cv2.imshow(window_name, images)

            key = cv2.waitKey(1)
            if key & 0xFF == ord('q') or key == 27:
                cv2.destroyAllWindows()
                break

    finally:
        print("Stopping stream...")
        pipeline.stop()
        print("Stream stopped.")

if __name__ == "__main__":
    try:
        main()
    except Exception as e:
        print(f"An error occurred: {e}")
        import traceback
        traceback.print_exc()