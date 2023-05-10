# Kinect Game Controller

***Introduction to the concept*** 

The Kinetic Gladiator Controller project aims to create an innovative and interactive armour suit that is specifically designed for playing the Gladiator game. Our primary goal is to provide users with a unique and immersive gaming experience by combining various interactive devices and technologies in the armour suit.

The purpose of our project is to create an intuitive user interface that is easy to use and enhances the overall gaming experience. We wanted to design an armour suit that not only looked the part of a warrior but also incorporated advanced technology that could detect the user's movements and translate them into game commands.

![IMG_0780.PNG](Kinect%20Game%20Controller%20d73a530e60574329863f2e044bf38f88/IMG_0780.png)

To achieve this goal, we have integrated various interactive devices and technologies into the armor suit. We used motion sensors to detect the user's movements and a vibrational motor to provide haptic feedback. These devices are controlled by an Arduino board, which is programmed to detect different types of movement and respond accordingly.

Additionally, we have used a Makey Makey input device controller to provide users with a familiar and intuitive way of interacting with the game. This device allows users to control the game using simple gestures and movements, which are detected by the motion sensors and translated into game commands.

By combining these different technologies and devices, we have created a seamless and intuitive user interface that enhances the overall gaming experience. The importance of this project lies in the fact that it demonstrates the potential of combining different technologies to create new and innovative products.

### Technicalities

**Pose Detection**

The project utilises several cutting-edge technologies to create an interactive armour suit for a warrior. One of the crucial technologies we employed was pose detection using MediaPipe and TensorFlow.

***Pose detection is a computer vision technique that detects and tracks human body joints and estimates their positions and movements***. MediaPipe is a powerful open-source framework for building cross-platform machine learning pipelines, including pose detection models. TensorFlow is another popular open-source machine learning framework developed by Google.

![https://mediapipe.dev/images/mobile/pose_tracking_full_body_landmarks.png](https://mediapipe.dev/images/mobile/pose_tracking_full_body_landmarks.png)

                                 *“Using different human joint nodes to fine tune and train the model”*

To develop our pose detection model, we first collected a dataset of various body poses and movements using a camera. We then trained a machine learning model using TensorFlow, using this dataset to recognise different poses and movements of the human body.

MediaPipe provides a comprehensive set of pre-trained models and ready-to-use pipelines for various computer vision tasks, including pose detection. We used MediaPipe to create a pipeline for our pose detection model, which includes several pre-processing and post-processing steps to optimise the performance of the model.

To fine-tune our pose detection model, we wrote a Python script that loads the MediaPipe pipeline, recognises the nodes, and predicts the pose based on the input data. We also fine-tuned the model by adjusting various parameters such as the size of the input image and the confidence threshold.

![Untitled](Kinect%20Game%20Controller%20d73a530e60574329863f2e044bf38f88/Untitled.png)

                                                               *“Node Recognition”*

Pose recognition has numerous potential applications, including gaming, sports, healthcare, and rehabilitation. In our project, we used pose detection to recognise different body movements and gestures of the user to control the armour suit.

***Using Teachable Machine***

The training process involved collecting data in the form of images of the user in different poses and movements. We collected a large dataset of images for different poses and movements to train our model. We then fed this data into Teachable Machine, which used it to train a neural network model for pose recognition.

The neural network model used by Teachable Machine is a convolutional neural network (CNN) that uses multiple layers of filters to learn features from the input images. These features are then used to classify the input image into one of the pre-defined classes, which in our case were different poses and movements.

![Untitled](Kinect%20Game%20Controller%20d73a530e60574329863f2e044bf38f88/Untitled%201.png)

                                                           *“Testing Teachable Model”*

To fine-tune our model, we used techniques such as data augmentation and transfer learning. ***Data augmentation*** involved randomly transforming the input images to create additional training data, which helped the model to generalise better to unseen data. Transfer learning involved using a pre-trained model as a starting point for our own model, which helped us to train our model faster and with fewer data.

To evaluate the performance of our model, we used metrics such as ***accuracy, precision, recall, and F1 score.*** These metrics helped us to measure how well our model was able to recognise different poses and movements.

Overall, using ***Teachable Machine for training our pose recognition model*** was a great way to quickly and easily create a machine learning model without requiring any coding experience. The platform provided us with all the tools and resources we needed to collect and train our data, and fine-tune our model to achieve the best performance possible.

```jsx
MediaPipe: A Framework for Building Perception Pipelines" by Google AI, published in IEEE Conference on Computer Vision and Pattern Recognition (CVPR) 2019.
"Real-time Human Pose Estimation with MediaPipe" by Google AI, published in the ACM Multimedia Conference (ACM MM) 2020.
MediaPipe documentation: https://mediapipe.dev/
"Teachable Machine: Easy Interactive Machine Learning for Everyone" by Daniel Smilkov et al.
"Convolutional Neural Networks: An Overview and Application in Radiology" by Wenhao Hu et al
```

***Electrical Sensor***

For the input device, we used a Makey Makey board, which is a simple circuit board that can turn everyday objects into touchpads. We connected the Makey Makey board to the warrior's armour suit, allowing the user to control the armour's movements and actions using various poses and gestures.

![Makey Makey basic controller setup](Kinect%20Game%20Controller%20d73a530e60574329863f2e044bf38f88/Untitled%202.png)

Makey Makey basic controller setup

To process the input from the Makey Makey board, we used an Arduino board, which is a microcontroller board designed to read inputs and outputs from various electronic components. We wrote a code in Arduino's programming language to receive input signals from the Makey Makey board and convert them into commands that control the various motors and haptic sensors in the armour suit.

One of the key features of our project was the use of a haptic sensor to provide feedback to the user. We used a small vibration motor attached to the vest of the armour to provide ***haptic feedback*** to the user when motion was detected. This allowed the user to feel the impact of their actions in real-time, enhancing the overall immersive experience.

In addition, we used a PIR (Passive Infrared) motion sensor to detect motion in the environment. When motion was detected, it triggered the haptic sensor to vibrate the armour suit, providing an additional layer of feedback to the user.

![Untitled](Kinect%20Game%20Controller%20d73a530e60574329863f2e044bf38f88/Untitled%203.png)

          *“PIR Sensor and Arduino”*

In addition, we used a ***PIR (Passive Infrared) motion sensor to detect motion in the environment.*** When motion was detected, it triggered the haptic sensor to vibrate the armour suit, providing an additional layer of feedback to the user.

![WhatsApp Image 2023-03-05 at 4.42.51 AM.jpeg](Kinect%20Game%20Controller%20d73a530e60574329863f2e044bf38f88/WhatsApp_Image_2023-03-05_at_4.42.51_AM.jpeg)

   *“Assembling Haptic Feedback to armour”*

![WhatsApp Image 2023-03-05 at 4.42.52 AM.jpeg](Kinect%20Game%20Controller%20d73a530e60574329863f2e044bf38f88/WhatsApp_Image_2023-03-05_at_4.42.52_AM.jpeg)

                   *“Testing Custom Sensor”*

![WhatsApp Image 2023-03-05 at 4.43.38 AM.jpeg](Kinect%20Game%20Controller%20d73a530e60574329863f2e044bf38f88/WhatsApp_Image_2023-03-05_at_4.43.38_AM.jpeg)

                         *“Coding Arduino”*

Overall, the use of Makey Makey and Arduino allowed us to create a seamless and intuitive user interface for the warrior's armour suit, while the haptic sensor and motion detection added an extra level of immersion and interactivity to the user experience.