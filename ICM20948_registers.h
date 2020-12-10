#ifndef ICM20948_REGISTERS
#define ICM20948_REGISTERS
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
#define    REG_BANK_SEL                        0x007F

// Gyroscope and Accelerometer
// User Bank 0
#define    AGB0_REG_WHO_AM_I                   0x0000
#define    AGB0_REG_USER_CTRL                  0x0003
#define    AGB0_REG_LP_CONFIG                  0x0005
#define    AGB0_REG_PWR_MGMT_1                 0x0006
#define    AGB0_REG_PWR_MGMT_2                 0x0007
#define    AGB0_REG_INT_PIN_CONFIG             0x000F
#define    AGB0_REG_INT_ENABLE                 0x0010
#define    AGB0_REG_INT_ENABLE_1               0x0011
#define    AGB0_REG_INT_ENABLE_2               0x0012
#define    AGB0_REG_INT_ENABLE_3               0x0013
#define    AGB0_REG_I2C_MST_STATUS             0x0017
#define    AGB0_REG_INT_STATUS                 0x0019
#define    AGB0_REG_INT_STATUS_1               0x001A
#define    AGB0_REG_INT_STATUS_2               0x001B
#define    AGB0_REG_INT_STATUS_3               0x001C
#define    AGB0_REG_DELAY_TIMEH                0x0028
#define    AGB0_REG_DELAY_TIMEL                0x0029
#define    AGB0_REG_ACCEL_XOUT_H               0x002D
#define    AGB0_REG_ACCEL_XOUT_L               0x002E
#define    AGB0_REG_ACCEL_YOUT_H               0x002F
#define    AGB0_REG_ACCEL_YOUT_L               0x0030
#define    AGB0_REG_ACCEL_ZOUT_H               0x0031
#define    AGB0_REG_ACCEL_ZOUT_L               0x0032
#define    AGB0_REG_GYRO_XOUT_H                0x0033
#define    AGB0_REG_GYRO_XOUT_L                0x0034
#define    AGB0_REG_GYRO_YOUT_H                0x0035
#define    AGB0_REG_GYRO_YOUT_L                0x0036
#define    AGB0_REG_GYRO_ZOUT_H                0x0037
#define    AGB0_REG_GYRO_ZOUT_L                0x0038
#define    AGB0_REG_TEMP_OUT_H                 0x0039
#define    AGB0_REG_TEMP_OUT_L                 0x003A
#define    AGB0_REG_EXT_SLV_SENS_DATA_00       0x003B
#define    AGB0_REG_EXT_SLV_SENS_DATA_01       0x003C
#define    AGB0_REG_EXT_SLV_SENS_DATA_02       0x003D
#define    AGB0_REG_EXT_SLV_SENS_DATA_03       0x003E
#define    AGB0_REG_EXT_SLV_SENS_DATA_04       0x003F
#define    AGB0_REG_EXT_SLV_SENS_DATA_05       0x0040
#define    AGB0_REG_EXT_SLV_SENS_DATA_06       0x0041
#define    AGB0_REG_EXT_SLV_SENS_DATA_07       0x0042
#define    AGB0_REG_EXT_SLV_SENS_DATA_08       0x0043
#define    AGB0_REG_EXT_SLV_SENS_DATA_09       0x0044
#define    AGB0_REG_EXT_SLV_SENS_DATA_10       0x0045
#define    AGB0_REG_EXT_SLV_SENS_DATA_11       0x0046
#define    AGB0_REG_EXT_SLV_SENS_DATA_12       0x0047
#define    AGB0_REG_EXT_SLV_SENS_DATA_13       0x0048
#define    AGB0_REG_EXT_SLV_SENS_DATA_14       0x0049
#define    AGB0_REG_EXT_SLV_SENS_DATA_15       0x004A
#define    AGB0_REG_EXT_SLV_SENS_DATA_16       0x004B
#define    AGB0_REG_EXT_SLV_SENS_DATA_17       0x004C
#define    AGB0_REG_EXT_SLV_SENS_DATA_18       0x004D
#define    AGB0_REG_EXT_SLV_SENS_DATA_19       0x004E
#define    AGB0_REG_EXT_SLV_SENS_DATA_20       0x004F
#define    AGB0_REG_EXT_SLV_SENS_DATA_21       0x0050
#define    AGB0_REG_EXT_SLV_SENS_DATA_22       0x0051
#define    AGB0_REG_EXT_SLV_SENS_DATA_23       0x0052
#define    AGB0_REG_FIFO_EN_1                  0x0066
#define    AGB0_REG_FIFO_EN_2                  0x0067
#define    AGB0_REG_FIFO_MODE                  0x0069
#define    AGB0_REG_FIFO_COUNT_H               0x0070
#define    AGB0_REG_FIFO_COUNT_L               0x0071
#define    AGB0_REG_FIFO_R_W                   0x0072
#define    AGB0_REG_DATA_RDY_STATUS            0x0074
#define    AGB0_REG_FIFO_CFG                   0x0076
#define    AGB0_REG_MEM_START_ADDR             0x007C # Hmm  Invensense thought they were sneaky not listing these locations on the datasheet.
#define    AGB0_REG_MEM_R_W                    0x007D # These three locations seem to be able to access some memory within the devi00ce
#define    AGB0_REG_MEM_BANK_SEL               0x007E # And that location is also where the DMP image gets loaded
#define    AGB0_REG_REG_BANK_SEL               0x007F
// Bank 1
#define    AGB1_REG_SELF_TEST_X_GYRO           0x0102
#define    AGB1_REG_SELF_TEST_Y_GYRO           0x0103
#define    AGB1_REG_SELF_TEST_Z_GYRO           0x0104
#define    AGB1_REG_SELF_TEST_X_ACCEL          0x010E
#define    AGB1_REG_SELF_TEST_Y_ACCEL          0x010F
#define    AGB1_REG_SELF_TEST_Z_ACCEL          0x0110
#define    AGB1_REG_XA_OFFS_H                  0x0114
#define    AGB1_REG_XA_OFFS_L                  0x0115
#define    AGB1_REG_YA_OFFS_H                  0x0117
#define    AGB1_REG_YA_OFFS_L                  0x0118
#define    AGB1_REG_ZA_OFFS_H                  0x011A
#define    AGB1_REG_ZA_OFFS_L                  0x011B
#define    AGB1_REG_TIMEBASE_CORRECTION_PLL    0x0128
#define    AGB1_REG_REG_BANK_SEL               0x017F
// Bank 2
#define    AGB2_REG_GYRO_SMPLRT_DIV            0x0200
#define    AGB2_REG_GYRO_CONFIG_1              0x0201
#define    AGB2_REG_GYRO_CONFIG_2              0x0202
#define    AGB2_REG_XG_OFFS_USRH               0x0203
#define    AGB2_REG_XG_OFFS_USRL               0x0204
#define    AGB2_REG_YG_OFFS_USRH               0x0205
#define    AGB2_REG_YG_OFFS_USRL               0x0206
#define    AGB2_REG_ZG_OFFS_USRH               0x0207
#define    AGB2_REG_ZG_OFFS_USRL               0x0208
#define    AGB2_REG_ODR_ALIGN_EN               0x0209
#define    AGB2_REG_ACCEL_SMPLRT_DIV_1         0x0210
#define    AGB2_REG_ACCEL_SMPLRT_DIV_2         0x0211
#define    AGB2_REG_ACCEL_INTEL_CTRL           0x0212
#define    AGB2_REG_ACCEL_WOM_THR              0x0213
#define    AGB2_REG_ACCEL_CONFIG_1             0x0214
#define    AGB2_REG_ACCEL_CONFIG_2             0x0215
#define    AGB2_REG_FSYNC_CONFIG               0x0252
#define    AGB2_REG_TEMP_CONFIG                0x0253
#define    AGB2_REG_MOD_CTRL_USR               0x0254
#define    AGB2_REG_REG_BANK_SEL               0x027F
// Bank 3
#define    AGB3_REG_I2C_MST_ODR_CONFIG         0x0300
#define    AGB3_REG_I2C_MST_CTRL               0x0301
#define    AGB3_REG_I2C_MST_DELAY_CTRL         0x0302
#define    AGB3_REG_I2C_SLV0_ADDR              0x0303
#define    AGB3_REG_I2C_SLV0_REG               0x0304
#define    AGB3_REG_I2C_SLV0_CTRL              0x0305
#define    AGB3_REG_I2C_SLV0_DO                0x0306
#define    AGB3_REG_I2C_SLV1_ADDR              0x0307
#define    AGB3_REG_I2C_SLV1_REG               0x0308
#define    AGB3_REG_I2C_SLV1_CTRL              0x0309
#define    AGB3_REG_I2C_SLV1_DO                0x030A
#define    AGB3_REG_I2C_SLV2_ADDR              0x030B
#define    AGB3_REG_I2C_SLV2_REG               0x030C
#define    AGB3_REG_I2C_SLV2_CTRL              0x030D
#define    AGB3_REG_I2C_SLV2_DO                0x030E
#define    AGB3_REG_I2C_SLV3_ADDR              0x030F
#define    AGB3_REG_I2C_SLV3_REG               0x0310
#define    AGB3_REG_I2C_SLV3_CTRL              0x0311
#define    AGB3_REG_I2C_SLV3_DO                0x0312
#define    AGB3_REG_I2C_SLV4_ADDR              0x0313
#define    AGB3_REG_I2C_SLV4_REG               0x0314
#define    AGB3_REG_I2C_SLV4_CTRL              0x0315
#define    AGB3_REG_I2C_SLV4_DO                0x0316
#define    AGB3_REG_I2C_SLV4_DI                0x0317
#define    AGB3_REG_REG_BANK_SEL               0x037F

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

// Data Structures
typedef struct
{
    uint16_t addr;
    uint8_t  data;
}   WRITE;

// Bank switching sequences
#define    SET_BANK_0_WRITE   {REG_BANK_SEL, 0x00}
#define    SET_BANK_1_WRITE   {REG_BANK_SEL, 0x10}
#define    SET_BANK_2_WRITE   {REG_BANK_SEL, 0x20}
#define    SET_BANK_3_WRITE   {REG_BANK_SEL, 0x30}

// Non I2C sequences
#define    NONI2C             0x8000
#define    SLEEP              0x0100

// Init sequence
// are we who we need to be?
// setBank(0)
// chipID = read AGB0_REG_WHO_AM_I
//
// software reset
// swReset()
#define    SW_RESET_WRITES    {SET_BANK_0_WRITE, {AGB0_REG_PWR_MGMT_1, 0x80}}
// sleep(.05)
#define    SLEEP_50MS_WRITE   {(NONI2C | SLEEP), 50} // 50 ms sleep
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
//
// set low pass filter for both accel and gyro (separate functions)
// setDLPFcfgAccel(acc_d473bw_n499bw)
// setDLPFcfgGyro(gyr_d361bw4_n376bw5)
//
// disable digital low pass filters on both accel and gyro
// enableDlpfAccel(False)
// enableDlpfGyro(False)

// startupMagnetometer()


// Init Sequence
#define    INIT_CMD {   SW_RESET_WRITES,    \
                        {SLEEP_50MS_WRITE}, \
                        SLEEP_OFF_WRITES,   \
                        LOW_POWER_WRITES,   \
                        SET_MODE_WRITES     }


typedef struct
{
    uint8_t     id;     // ID_READ_BYTE
    uint16_t    ax;
    uint16_t    ay;
    uint16_t    az;
    uint16_t    gx;
    uint16_t    gy;
    uint16_t    gz;
    uint16_t    mx;
    uint16_t    my;
    uint16_t    mz;
    uint16_t    temp;
    uint16_t    magstat;
}   DATA;


// I am not a fan of macros but this allowed my to contain all the IC specific
// details in a single file.
#define GETDATA(x)                                                              \
    x.id = ReadRegister(AGB0_REG_WHO_AM_I);                                     \
    x.ax = (((uint16_t)ReadRegister(AGB0_REG_ACCEL_XOUT_H)<<8)+                 \
            (ReadRegister(AGB0_REG_ACCEL_XOUT_L)));                             \
    x.ay = (((uint16_t)ReadRegister(AGB0_REG_ACCEL_YOUT_H)<<8)+                 \
            (ReadRegister(AGB0_REG_ACCEL_YOUT_L)));                             \
    x.az = (((uint16_t)ReadRegister(AGB0_REG_ACCEL_ZOUT_H)<<8)+                 \
            (ReadRegister(AGB0_REG_ACCEL_ZOUT_L)));                             \
    x.gx = (((uint16_t)ReadRegister(AGB0_REG_GYRO_XOUT_H)<<8)+                  \
            (ReadRegister(AGB0_REG_GYRO_XOUT_L)));                              \
    x.gy = (((uint16_t)ReadRegister(AGB0_REG_GYRO_YOUT_H)<<8)+                  \
            (ReadRegister(AGB0_REG_GYRO_YOUT_L)));                              \
    x.gz = (((uint16_t)ReadRegister(AGB0_REG_GYRO_ZOUT_H)<<8)+                  \
            (ReadRegister(AGB0_REG_GYRO_ZOUT_L)));                              \
    x.temp = (((uint16_t)ReadRegister(AGB0_REG_TEMP_OUT_H)<<8)+                 \
            (ReadRegister(AGB0_REG_TEMP_OUT_L)));                               \
    x.mx = (((uint16_t)ReadRegister(AGB0_REG_EXT_SLV_SENS_DATA_02)<<8)+         \
            (ReadRegister(AGB0_REG_EXT_SLV_SENS_DATA_01)));                     \
    x.my = (((uint16_t)ReadRegister(AGB0_REG_EXT_SLV_SENS_DATA_04)<<8)+         \
            (ReadRegister(AGB0_REG_EXT_SLV_SENS_DATA_03)));                     \
    x.mz = (((uint16_t)ReadRegister(AGB0_REG_EXT_SLV_SENS_DATA_06)<<8)+         \
            (ReadRegister(AGB0_REG_EXT_SLV_SENS_DATA_05)));                     \
    x.magstat = (((uint16_t)ReadRegister(AGB0_REG_EXT_SLV_SENS_DATA_00)<<8)+    \
                 (ReadRegister(AGB0_REG_EXT_SLV_SENS_DATA_08)));                \


#endif
