This is a project I Thata I have worked with some students at the school I worked, they had the idea to create a Roboto Arm that sort out recycle materials using AI.

So doing some research I found out about yolov5, that uses Python to recognize different objects and I forked their repository, all credits to ultralytics with it.

https://github.com/ultralytics/yolov5

Now there was the part of using Arduino and 3D print a Robot Arm so for this  we used a the model created by instructables.com.

https://www.instructables.com/Robot-Arm-1/

They also have the movements needed to work with it. All credits to them for the design and C code for the Robot Arm.

The last step was to combine both projects, so for it i added a library to the yolov5 project that can use a serial output to send commands to the arduino arm, to be more spcific I use serial and Time to give a chance to do the movement.

Also was created a decision where it can be defined which objects recognised and set it to a side (or the other) whether they are considered recycleble or not.

On the arduino side, it recieves one of two values ( 1 or 2 ) and it takes the object to place it where it should.

It's a basic project but a very insteresting one.

For the next push I will try to add some images and GIFs/Video to this repo.
