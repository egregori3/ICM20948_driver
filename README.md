# ICM20948_driver

https://github.com/sparkfun/Qwiic_9DoF_IMU_ICM20948_Py

https://github.com/drcpattison/ICM-20948

https://github.com/CoryCline/ICM20948

https://invensense.tdk.com/wp-content/uploads/2016/06/DS-000189-ICM-20948-v1.3.pdf

https://www.y-ic.es/datasheet/78/SMDSW.020-2OZ.pdf

# ICM20948

> The ICM-20948 is a multi-chip module (MCM) consisting of two dies integrated into a single QFN package. One die
> houses a 3-axis gyroscope, a 3-axis accelerometer, and a Digital Motion Processor™ (DMP). The other die houses the
> AK09916 3-axis magnetometer from Asahi Kasei Microdevices Corporation. The ICM-20948 is a 9-axis MotionTracking
> device all in a small 3x3x1mm QFN package"

# I2C Interface

## Single Byte Write

```
Master |S|address|W| |register address| |data| |P|
Slave              |A|                |A|    |A|
       |S|address|W[A] Comm           [A]data[A]P| -  i2c_smbus_write_byte_data()

```

## Single Byte Read (repeated START)

```
Master |S|address|W| |register address| |S|address|R|      |N|P|
Slave              |A|                |A|           |A|data|
       |S|address|W[A] Comm           [A]S|addr   |R[A[Data]N|P| - i2c_smbus_read_byte_data()
```

# ICM20948 Initialization
The initialization is a port from the Sparkfun Python driver for the ICM20948 IMU
https://github.com/sparkfun/Qwiic_9DoF_IMU_ICM20948_Py/blob/master/qwiic_icm20948.py
along with the ICM20948 datasheet.
https://invensense.tdk.com/wp-content/uploads/2016/06/DS-000189-ICM-20948-v1.3.pdf


The initialization for the Accel and Gyro is very simple. Set a reset bit and wait.
The IMU defaults to to the accel and Gyro running in a continuous mode.

## Compass
The compass is a seperate die connecting to the gyro/Accel via the aux I2C bus.

> The ICM-20948 is an I2C master to the optional external sensor. 
> The ICM-20948 has limited capabilities as an I2C Master, and depends on the system
> processor to manage the initial configuration of any auxiliary sensors. 
> The ICM-20948 has an interface bypass multiplexer, which connects the system processor 
> I2C bus pins 23 and 24 (SCL and SDA) directly to the auxiliary sensor I2C bus pins 7 and 21 (AUX_CL and AUX_DA)
>
> The ICM-20948 has an auxiliary I2C bus for communicating to external sensors. 
> This bus has two operating modes:
>
> • I2C Master Mode: The ICM-20948 acts as a master to any external sensors connected to the auxiliary I2C bus.
>
> • Pass-Through Mode: The ICM-20948 directly connects the primary and auxiliary I2C buses together, allowing
> the system processor to directly communicate with any external sensors. 
>
> Auxiliary I2C Bus Modes of Operation:
>
> • I2C Master Mode: Allows the ICM-20948 to directly access the data registers of external sensors. In this
> mode, the ICM-20948 directly obtains data from auxiliary sensors without intervention from the system
> applications processor. The I2C Master can be configured to read up to 24 bytes from up to 4 auxiliary
> sensors. A fifth sensor can be configured to work single byte read/write mode.
>
> • Pass-Through Mode: Allows an external system processor to act as master and directly communicate to the
> external sensors connected to the auxiliary I2C bus pins (AUX_DA and AUX_CL). In this mode, the auxiliary I2C
> bus control logic of the ICM-20948 is disabled, and the auxiliary I2C pins AUX_CL and AUX_DA (pins 7 and 21)
> are connected to the main I2C bus (Pins 23 and 24) through analog switches internally. Pass-Through mode is
> useful for configuring the external sensors.


### Compass Initialization (AK09916)
	
Set the ICM to pass-through mode. The compass is I2C address 0x0C. 
init
0x32 = 1 (reset)
wait for 0x32 == 0

read
0x31 = 1 (single measurment start)
wait for 0x10 == 1
read 0x11 to 0x16 
