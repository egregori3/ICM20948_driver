# ICM20948_driver


https://github.com/sparkfun/Qwiic_9DoF_IMU_ICM20948_Py

https://github.com/drcpattison/ICM-20948

https://github.com/CoryCline/ICM20948

https://invensense.tdk.com/wp-content/uploads/2016/06/DS-000189-ICM-20948-v1.3.pdf





```

# ICM20948 Initialization
The initialization is a port from the Sparkfun Python driver for the ICM20948 IMU
https://github.com/sparkfun/Qwiic_9DoF_IMU_ICM20948_Py/blob/master/qwiic_icm20948.py
along with the ICM20948 datasheet.
https://invensense.tdk.com/wp-content/uploads/2016/06/DS-000189-ICM-20948-v1.3.pdf


The initialization for the Accel and Gyro is very simple. Set a reset bit and wait.
The IMU defaults to to the accel and Gyro running in a continuous mode.

"The ICM-20948 is a multi-chip module (MCM) consisting of two dies integrated into a single QFN package. One die
houses a 3-axis gyroscope, a 3-axis accelerometer, and a Digital Motion Processor™ (DMP). The other die houses the
AK09916 3-axis magnetometer from Asahi Kasei Microdevices Corporation. The ICM-20948 is a 9-axis MotionTracking
device all in a small 3x3x1mm QFN package"




