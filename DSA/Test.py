import cv2
import numpy as np

# Path to your video file
video_path = r'D:\\MATLAB\\Sample_Vid\\a1.mp4'  # Replace 'your_video_file.mp4' with the actual file name

# Initialize video capture
cap = cv2.VideoCapture(video_path)

# Check if video opened successfully
if not cap.isOpened():
    print("Error: Could not open video.")
    exit()

# Create the background subtractor object
fgbg = cv2.createBackgroundSubtractorMOG2()

# Define codec and create VideoWriter object to save the result
fourcc = cv2.VideoWriter_fourcc(*'XVID')
out = cv2.VideoWriter('cars_detected.avi', fourcc, 20.0, (int(cap.get(3)), int(cap.get(4))))

while True:
    # Read frame by frame
    ret, frame = cap.read()
    
    if not ret:
        break  # Exit loop when video ends

    # Apply background subtraction
    fgmask = fgbg.apply(frame)

    # Optionally, you can apply some morphological operations to improve the mask
    kernel = np.ones((5, 5), np.uint8)
    fgmask = cv2.morphologyEx(fgmask, cv2.MORPH_CLOSE, kernel)

    # Find contours of the detected objects
    contours, _ = cv2.findContours(fgmask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

    # Draw bounding boxes around detected cars
    for contour in contours:
        if cv2.contourArea(contour) > 500:  # Adjust area threshold based on object size
            (x, y, w, h) = cv2.boundingRect(contour)
            cv2.rectangle(frame, (x, y), (x+w, y+h), (0, 255, 0), 2)

    # Write the processed frame to the output video
    out.write(frame)

    # Display the resulting frame
    cv2.imshow('Frame', frame)
    cv2.imshow('FG Mask', fgmask)

    # Break the loop on 'q' key press
    if cv2.waitKey(30) & 0xFF == ord('q'):
        break

# Release everything when done
cap.release()
out.release()
cv2.destroyAllWindows()
