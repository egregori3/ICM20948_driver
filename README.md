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


# Building

When building C++ apps, the i2c headers need to be wrapped by extern "C".
extern "C" {
#include <linux/i2c.h>
#include <linux/i2c-dev.h>
#include <i2c/smbus.h>
}

Of-course you need to include -li2c in your g++ command line.
g++ -std=c++11 ICM20948_linux_driver.cc -li2c


# Testing

```
ls /dev/ | grep "i2c"
   i2c-1
i2cdetect -l
i2c-1    unknown   bcm2835 (i2c@7e804000)          N/A
```

# Using the i2c driver

```
ICM20948LinuxDriver::ICM20948LinuxDriver(char *PathFilename, uint8_t i2c_add)
{
    int ret_val = 0;

    printf("Opening I2C Driver: %s\n", PathFilename);
#if ONHARDWARE
    fp = open(PathFilename, O_RDWR);
    if (fp < 0)
    {
        perror("Unable to open device node.");
    }

    // Set I2C_SLAVE address */
    ret_val = ioctl(fp,I2C_SLAVE,i2c_add);
    if (ret_val < 0)
    {
        perror("Could not set I2C_SLAVE.");
    }
#endif

    initialized = true;
    i2c_address = i2c_add;

    printf("Initializing IMU over I2c\n");
    WriteCommands(vector<vector<WRITE> > INIT_CMD);
}

// Read a single register
uint8_t ICM20948LinuxDriver::ReadRegister(uint8_t paddr)
{
    int data = 0;
    uint8_t addr = paddr & 0x00FF;

#if ONHARDWARE
    data = i2c_smbus_read_byte_data(fp, addr);
    if (data < 0)
    {
        perror("I2C Read operation failed.");
    }
#endif
    printf("READ -> addr: %2x = %2x\n", addr, data);
    return (uint8_t)data;
}

// Write a single register
int ICM20948LinuxDriver::WriteRegister(WRITE &data)
{
    int ret_val = 0;
    uint8_t addr = data.addr & 0x00FF;

#if ONHARDWARE
    ret_val = i2c_smbus_write_byte_data(fp,
                                        addr,
                                        data.data);
    if (ret_val < 0)
    {
        perror("I2C Write Operation failed.");
    }
#endif
    printf("WRITE -> addr: %2x, data: %2x\n", data.addr, data.data);
    return ret_val;
}
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




