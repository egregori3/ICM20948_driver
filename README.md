# ICM20948_driver

A c++ driver for the ICM20948 with a i2c_dev userspace wrapper.

https://www.kernel.org/doc/Documentation/i2c/dev-interface

https://www.kernel.org/doc/html/latest/i2c/smbus-protocol.html

https://github.com/sparkfun/Qwiic_9DoF_IMU_ICM20948_Py

https://github.com/drcpattison/ICM-20948

https://github.com/CoryCline/ICM20948

https://invensense.tdk.com/wp-content/uploads/2016/06/DS-000189-ICM-20948-v1.3.pdf

https://linux-sunxi.org/I2Cdev


# Installation

sudo apt-get install -y libi2c-dev

# Testing

```
ls /dev/ | grep "i2c"
   i2c-1
i2cdetect -l
i2c-1    unknown   bcm2835 (i2c@7e804000)          N/A
```

