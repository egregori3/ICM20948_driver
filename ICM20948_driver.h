#ifndef ICM20948_REGISTERS
#define ICM20948_REGISTERS

#include <stdio.h>  // printf
#include <cstdint>  // uint8_t
#include "UserSpaceI2C_driver.h"

// ICM20948 registers
//
// I (Eric Gregori) copied these register definitions from Sparkfun.
// https://github.com/sparkfun/Qwiic_9DoF_IMU_ICM20948_Py/blob/master/qwiic_icm20948.py
//
//=================================================================================
// Copyright (c) 2020 SparkFun Electronics
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//==================================================================================

// Generalized
#define    REG_BANK_SEL                        0x7F

// Gyroscope and Accelerometer
// User Bank 0
#define    AGB0_REG_WHO_AM_I                   0x00
#define    AGB0_REG_USER_CTRL                  0x03
#define    AGB0_REG_LP_CONFIG                  0x05
#define    AGB0_REG_PWR_MGMT_1                 0x06
#define    AGB0_REG_PWR_MGMT_2                 0x07
#define    AGB0_REG_INT_PIN_CONFIG             0x0F
#define    AGB0_REG_INT_ENABLE                 0x10
#define    AGB0_REG_INT_ENABLE_1               0x11
#define    AGB0_REG_INT_ENABLE_2               0x12
#define    AGB0_REG_INT_ENABLE_3               0x13
#define    AGB0_REG_I2C_MST_STATUS             0x17
#define    AGB0_REG_INT_STATUS                 0x19
#define    AGB0_REG_INT_STATUS_1               0x1A
#define    AGB0_REG_INT_STATUS_2               0x1B
#define    AGB0_REG_INT_STATUS_3               0x1C
#define    AGB0_REG_DELAY_TIMEH                0x28
#define    AGB0_REG_DELAY_TIMEL                0x29
#define    AGB0_REG_ACCEL_XOUT_H               0x2D
#define    AGB0_REG_ACCEL_XOUT_L               0x2E
#define    AGB0_REG_ACCEL_YOUT_H               0x2F
#define    AGB0_REG_ACCEL_YOUT_L               0x30
#define    AGB0_REG_ACCEL_ZOUT_H               0x31
#define    AGB0_REG_ACCEL_ZOUT_L               0x32
#define    AGB0_REG_GYRO_XOUT_H                0x33
#define    AGB0_REG_GYRO_XOUT_L                0x34
#define    AGB0_REG_GYRO_YOUT_H                0x35
#define    AGB0_REG_GYRO_YOUT_L                0x36
#define    AGB0_REG_GYRO_ZOUT_H                0x37
#define    AGB0_REG_GYRO_ZOUT_L                0x38
#define    AGB0_REG_TEMP_OUT_H                 0x39
#define    AGB0_REG_TEMP_OUT_L                 0x3A
#define    AGB0_REG_EXT_SLV_SENS_DATA_00       0x3B
#define    AGB0_REG_EXT_SLV_SENS_DATA_01       0x3C
#define    AGB0_REG_EXT_SLV_SENS_DATA_02       0x3D
#define    AGB0_REG_EXT_SLV_SENS_DATA_03       0x3E
#define    AGB0_REG_EXT_SLV_SENS_DATA_04       0x3F
#define    AGB0_REG_EXT_SLV_SENS_DATA_05       0x40
#define    AGB0_REG_EXT_SLV_SENS_DATA_06       0x41
#define    AGB0_REG_EXT_SLV_SENS_DATA_07       0x42
#define    AGB0_REG_EXT_SLV_SENS_DATA_08       0x43
#define    AGB0_REG_EXT_SLV_SENS_DATA_09       0x44
#define    AGB0_REG_EXT_SLV_SENS_DATA_10       0x45
#define    AGB0_REG_EXT_SLV_SENS_DATA_11       0x46
#define    AGB0_REG_EXT_SLV_SENS_DATA_12       0x47
#define    AGB0_REG_EXT_SLV_SENS_DATA_13       0x48
#define    AGB0_REG_EXT_SLV_SENS_DATA_14       0x49
#define    AGB0_REG_EXT_SLV_SENS_DATA_15       0x4A
#define    AGB0_REG_EXT_SLV_SENS_DATA_16       0x4B
#define    AGB0_REG_EXT_SLV_SENS_DATA_17       0x4C
#define    AGB0_REG_EXT_SLV_SENS_DATA_18       0x4D
#define    AGB0_REG_EXT_SLV_SENS_DATA_19       0x4E
#define    AGB0_REG_EXT_SLV_SENS_DATA_20       0x4F
#define    AGB0_REG_EXT_SLV_SENS_DATA_21       0x50
#define    AGB0_REG_EXT_SLV_SENS_DATA_22       0x51
#define    AGB0_REG_EXT_SLV_SENS_DATA_23       0x52
#define    AGB0_REG_FIFO_EN_1                  0x66
#define    AGB0_REG_FIFO_EN_2                  0x67
#define    AGB0_REG_FIFO_MODE                  0x69
#define    AGB0_REG_FIFO_COUNT_H               0x70
#define    AGB0_REG_FIFO_COUNT_L               0x71
#define    AGB0_REG_FIFO_R_W                   0x72
#define    AGB0_REG_DATA_RDY_STATUS            0x74
#define    AGB0_REG_FIFO_CFG                   0x76
#define    AGB0_REG_MEM_START_ADDR             0x7C # Hmm  Invensense thought they were sneaky not listing these locations on the datasheet.
#define    AGB0_REG_MEM_R_W                    0x7D # These three locations seem to be able to access some memory within the devi00ce
#define    AGB0_REG_MEM_BANK_SEL               0x7E # And that location is also where the DMP image gets loaded
#define    AGB0_REG_REG_BANK_SEL               0x7F
// Bank 1
#define    AGB1_REG_SELF_TEST_X_GYRO           0x02
#define    AGB1_REG_SELF_TEST_Y_GYRO           0x03
#define    AGB1_REG_SELF_TEST_Z_GYRO           0x04
#define    AGB1_REG_SELF_TEST_X_ACCEL          0x0E
#define    AGB1_REG_SELF_TEST_Y_ACCEL          0x0F
#define    AGB1_REG_SELF_TEST_Z_ACCEL          0x10
#define    AGB1_REG_XA_OFFS_H                  0x14
#define    AGB1_REG_XA_OFFS_L                  0x15
#define    AGB1_REG_YA_OFFS_H                  0x17
#define    AGB1_REG_YA_OFFS_L                  0x18
#define    AGB1_REG_ZA_OFFS_H                  0x1A
#define    AGB1_REG_ZA_OFFS_L                  0x1B
#define    AGB1_REG_TIMEBASE_CORRECTION_PLL    0x28
#define    AGB1_REG_REG_BANK_SEL               0x7F
// Bank 2
#define    AGB2_REG_GYRO_SMPLRT_DIV            0x00
#define    AGB2_REG_GYRO_CONFIG_1              0x01
#define    AGB2_REG_GYRO_CONFIG_2              0x02
#define    AGB2_REG_XG_OFFS_USRH               0x03
#define    AGB2_REG_XG_OFFS_USRL               0x04
#define    AGB2_REG_YG_OFFS_USRH               0x05
#define    AGB2_REG_YG_OFFS_USRL               0x06
#define    AGB2_REG_ZG_OFFS_USRH               0x07
#define    AGB2_REG_ZG_OFFS_USRL               0x08
#define    AGB2_REG_ODR_ALIGN_EN               0x09
#define    AGB2_REG_ACCEL_SMPLRT_DIV_1         0x10
#define    AGB2_REG_ACCEL_SMPLRT_DIV_2         0x11
#define    AGB2_REG_ACCEL_INTEL_CTRL           0x12
#define    AGB2_REG_ACCEL_WOM_THR              0x13
#define    AGB2_REG_ACCEL_CONFIG_1             0x14
#define    AGB2_REG_ACCEL_CONFIG_2             0x15
#define    AGB2_REG_FSYNC_CONFIG               0x52
#define    AGB2_REG_TEMP_CONFIG                0x53
#define    AGB2_REG_MOD_CTRL_USR               0x54
#define    AGB2_REG_REG_BANK_SEL               0x7F
// Bank 3
#define    AGB3_REG_I2C_MST_ODR_CONFIG         0x00
#define    AGB3_REG_I2C_MST_CTRL               0x01
#define    AGB3_REG_I2C_MST_DELAY_CTRL         0x02
#define    AGB3_REG_I2C_SLV0_ADDR              0x03
#define    AGB3_REG_I2C_SLV0_REG               0x04
#define    AGB3_REG_I2C_SLV0_CTRL              0x05
#define    AGB3_REG_I2C_SLV0_DO                0x06
#define    AGB3_REG_I2C_SLV1_ADDR              0x07
#define    AGB3_REG_I2C_SLV1_REG               0x08
#define    AGB3_REG_I2C_SLV1_CTRL              0x09
#define    AGB3_REG_I2C_SLV1_DO                0x0A
#define    AGB3_REG_I2C_SLV2_ADDR              0x0B
#define    AGB3_REG_I2C_SLV2_REG               0x0C
#define    AGB3_REG_I2C_SLV2_CTRL              0x0D
#define    AGB3_REG_I2C_SLV2_DO                0x0E
#define    AGB3_REG_I2C_SLV3_ADDR              0x0F
#define    AGB3_REG_I2C_SLV3_REG               0x10
#define    AGB3_REG_I2C_SLV3_CTRL              0x11
#define    AGB3_REG_I2C_SLV3_DO                0x12
#define    AGB3_REG_I2C_SLV4_ADDR              0x13
#define    AGB3_REG_I2C_SLV4_REG               0x14
#define    AGB3_REG_I2C_SLV4_CTRL              0x15
#define    AGB3_REG_I2C_SLV4_DO                0x16
#define    AGB3_REG_I2C_SLV4_DI                0x17
#define    AGB3_REG_REG_BANK_SEL               0x7F

// Magnetometer
#define    M_REG_WIA2                          0x01
#define    M_REG_ST1                           0x10
#define    M_REG_HXL                           0x11
#define    M_REG_HXH                           0x12
#define    M_REG_HYL                           0x13
#define    M_REG_HYH                           0x14
#define    M_REG_HZL                           0x15
#define    M_REG_HZH                           0x16
#define    M_REG_ST2                           0x18
#define    M_REG_CNTL2                         0x31
#define    M_REG_CNTL3                         0x32
#define    M_REG_TS1                           0x33
#define    M_REG_TS2                           0x34

// Bank switching sequences
#define    SET_BANK_0_WRITE   {REG_BANK_SEL, 0x00}
#define    SET_BANK_1_WRITE   {REG_BANK_SEL, 0x10}
#define    SET_BANK_2_WRITE   {REG_BANK_SEL, 0x20}
#define    SET_BANK_3_WRITE   {REG_BANK_SEL, 0x30}

// Init sequence
// are we who we need to be?
// setBank(0)
// chipID = read AGB0_REG_WHO_AM_I
//
// software reset
// swReset()
#define    SW_RESET_WRITES    {SET_BANK_0_WRITE, {AGB0_REG_PWR_MGMT_1, 0x80}}
// sleep(.05)
#define    SLEEP_50MS_WRITE   {SLEEP, 50} // 50 ms sleep
#define    SLEEP_10MS_WRITE   {SLEEP, 10} // 10 ms sleep
//
// set sleep mode off
// sleep(False)
#define    SLEEP_OFF_WRITES   {SET_BANK_0_WRITE, {AGB0_REG_PWR_MGMT_1, 0x00}}
//
// set lower power mode off
// lowPower(False)
#define    LOW_POWER_WRITES   {SET_BANK_0_WRITE, {AGB0_REG_PWR_MGMT_1, 0x00}}
//
// set sample mode to continuous for both accel and gyro
// setSampleMode((ICM_20948_Internal_Acc | ICM_20948_Internal_Gyr), ICM_20948_Sample_Mode_Continuous)
#define    SET_MODE_WRITES    {SET_BANK_0_WRITE, {AGB0_REG_LP_CONFIG, 0x00}}
//
// set full scale range for both accel and gryo (separate functions)
// setFullScaleRangeAccel(gpm2)
// setFullScaleRangeGyro(dps250)
#define    BYPASS_GYRO_DLPF  {SET_BANK_2_WRITE, {AGB2_REG_GYRO_CONFIG_1, 0x00}}
//
// set low pass filter for both accel and gyro (separate functions)
// setDLPFcfgAccel(acc_d473bw_n499bw)
// setDLPFcfgGyro(gyr_d361bw4_n376bw5)
//
// disable digital low pass filters on both accel and gyro
// enableDlpfAccel(False)
// enableDlpfGyro(False)

// Compass
#define    ENABLE_PASSTHROUGH {SET_BANK_0_WRITE, {AGB0_REG_INT_PIN_CONFIG, (1<<1)}}
#define    RESET_COMPASS {{M_REG_CNTL3, 0x01}, SLEEP_50MS_WRITE}
#define    START_AK0_READ_CMD {{{M_REG_CNTL2, 1}, SLEEP_10MS_WRITE}}

// Init Sequence
#define    INIT_ICM_CMD {SW_RESET_WRITES,   \
                        {SLEEP_50MS_WRITE}, \
                        SLEEP_OFF_WRITES,   \
                        {SLEEP_50MS_WRITE}, \
                        LOW_POWER_WRITES,   \
                        {SLEEP_50MS_WRITE}, \
                        SET_MODE_WRITES,    \
                        {SLEEP_50MS_WRITE}, \
                        BYPASS_GYRO_DLPF,   \
                        ENABLE_PASSTHROUGH, \
                        {SET_BANK_0_WRITE}} \

#define   INIT_AK0_CMD  {RESET_COMPASS}

typedef struct
{
    uint8_t     id;     // ID_READ_BYTE
    uint16_t    ax;
    uint16_t    ay;
    uint16_t    az;
    uint16_t    gx;
    uint16_t    gy;
    uint16_t    gz;
    uint16_t    temp;
}   IMUDATA;

typedef struct
{
    uint8_t     id;     // ID BYTE
    uint16_t    mx;
    uint16_t    my;
    uint16_t    mz;
    uint16_t    magstat;
}   MAGDATA;

class ICM20948driver
{
    private:
        UserSpaceI2Cdriver *i2c;
        int status;

    public:
        ICM20948driver(UserSpaceI2Cdriver *pi2c)
        {
            i2c = pi2c;
            status = i2c->WriteCommands(INIT_ICM_CMD);
        }
        int GetStatus() { return status; }
        int GetIMUVersion(void)
        {
            return(i2c->ReadByteData(AGB0_REG_WHO_AM_I));
        }
        int GetMAGVersion(void)
        {
            return(i2c->ReadByteData(M_REG_WIA2));
        }
        int ReadIMU(IMUDATA *x)
        {
            x->id = i2c->ReadByteData(AGB0_REG_WHO_AM_I);
            x->ax = (((uint16_t)i2c->ReadByteData(AGB0_REG_ACCEL_XOUT_H)<<8)+
                               (i2c->ReadByteData(AGB0_REG_ACCEL_XOUT_L)));
            x->ay = (((uint16_t)i2c->ReadByteData(AGB0_REG_ACCEL_YOUT_H)<<8)+
                               (i2c->ReadByteData(AGB0_REG_ACCEL_YOUT_L)));
            x->az = (((uint16_t)i2c->ReadByteData(AGB0_REG_ACCEL_ZOUT_H)<<8)+
                               (i2c->ReadByteData(AGB0_REG_ACCEL_ZOUT_L)));
            x->gx = (((uint16_t)i2c->ReadByteData(AGB0_REG_GYRO_XOUT_H)<<8)+
                               (i2c->ReadByteData(AGB0_REG_GYRO_XOUT_L)));
            x->gy = (((uint16_t)i2c->ReadByteData(AGB0_REG_GYRO_YOUT_H)<<8)+
                               (i2c->ReadByteData(AGB0_REG_GYRO_YOUT_L)));
            x->gz = (((uint16_t)i2c->ReadByteData(AGB0_REG_GYRO_ZOUT_H)<<8)+
                               (i2c->ReadByteData(AGB0_REG_GYRO_ZOUT_L)));
            x->temp = (((uint16_t)i2c->ReadByteData(AGB0_REG_TEMP_OUT_H)<<8)+
                                 (i2c->ReadByteData(AGB0_REG_TEMP_OUT_L)));
            return 0;
        }
        int ReadMAG(MAGDATA *x)
        {
            status = i2c->WriteCommands(START_AK0_READ_CMD);
            x->id = i2c->ReadByteData(M_REG_WIA2);
            x->mx = (((uint16_t)i2c->ReadByteData(M_REG_HXH)<<8)+
                               (i2c->ReadByteData(M_REG_HXL)));
            x->my = (((uint16_t)i2c->ReadByteData(M_REG_HYH)<<8)+
                               (i2c->ReadByteData(M_REG_HYL)));
            x->mz = (((uint16_t)i2c->ReadByteData(M_REG_HZH)<<8)+
                               (i2c->ReadByteData(M_REG_HZL)));
            x->magstat = (((uint16_t)i2c->ReadByteData(M_REG_ST1)<<8)+
                                    (i2c->ReadByteData(M_REG_ST2)));

            return 0;
        }
};


#endif
