// ICM20948 IMU Userspace Linux Driver
// By Eric Gregori

#include <errno.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <linux/i2c-dev.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <vector>
#include "ICM20948_registers.h"
#include "ICM20948_linux_driver.h"

#define ONHARDWARE  0

using namespace std;

// Read a single register
uint8_t ICM20948LinuxDriver::ReadRegister(uint8_t addr)
{
    int data = 0;
#if ONHARDWARE
    data = i2c_smbus_read_byte_data(fp, addr);
    if (data < 0)
    {
        perror("I2C Read operation failed.");
    }
#endif
    printf("READ -> addr: %4x\n", addr);
    return (uint8_t)data;
}

// Write a single register
int ICM20948LinuxDriver::WriteRegister(WRITE &data)
{
    int ret_val = 0;
#if ONHARDWARE
    ret_val = i2c_smbus_write_byte_data(fp,
                                        data.addr,
                                        data.data);
 
    if (ret_val < 0)
    {
        perror("I2C Write Operation failed.");
    }
#endif
    printf("WRITE -> addr: %4x, data: %2x\n", data.addr, data.data);
    return ret_val;
}

// Write a vector of commands
int ICM20948LinuxDriver::WriteCommands(vector<vector<WRITE> >cmd)
{
    for(int i=0; i<cmd.size(); ++i)
        WriteRegisters(cmd[i]);
    return 0;
}

// Write a vector of registers
int ICM20948LinuxDriver::WriteRegisters(vector<WRITE> registers)
{
    for(int i=0; i<registers.size(); ++i)
    {
        if((registers[i].addr & NONI2C) == 0)
            WriteRegister(registers[i]);
        else
        {
            switch(registers[i].addr & ~NONI2C)
            {
                case SLEEP:
                    printf("SLEEP -> %d\n", registers[i].data);
                    break;
            }
        }
    }
    return 0;
}

ICM20948LinuxDriver::ICM20948LinuxDriver(char *PathFilename, uint8_t i2c_add)
{
    printf("Opening I2C Driver: %s\n", PathFilename);
#if ONHARDWARE
    fp = open(i2c_dev_node_path, O_RDWR);
    if (fp < 0)
    {
        perror("Unable to open device node.");
    }

    // Set I2C_SLAVE address */
    ret_val = ioctl(i2c_dev_node,I2C_SLAVE,i2c_add);
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

ICM20948LinuxDriver::~ICM20948LinuxDriver()
{
}

int ICM20948LinuxDriver::ReadIMUData(void)
{
    DATA data;
    GETDATA(data)
    DumpData(data);
    return 0;
}


int main(int argc, char **argv)
{
    ICM20948LinuxDriver driver(argv[1], 0x53);

    driver.ReadIMUData();
}

