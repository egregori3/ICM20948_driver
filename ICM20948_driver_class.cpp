// ICM20948 IMU Userspace Linux Driver
// By Eric Gregori

#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <vector>
#include "ICM20948_registers.h"

using namespace std;

class ICM20948
{
    public:
        int WriteRegister(vector<WRITE> vect);
        int WriteRegisters(vector<vector<WRITE> >);
        void DumpData(vector<WRITE> vect);
};

// Write a single register
int ICM20948::WriteRegister(vector<WRITE> vect)
{
    DumpData(vect);
}

int ICM20948::WriteRegisters(vector<vector<WRITE> >cmd)
{
    for(int i=0; i<cmd.size(); ++i)
        WriteRegister(cmd[i]);
}

void ICM20948::DumpData(vector<WRITE> vect)
{
    for(int i=0; i<vect.size(); ++i)
    {
        if((vect[i].addr & NONI2C) == 0)
            printf("WRITE -> addr: %4x, data: %2x\n", vect[i].addr, vect[i].data);
        else
        {
            switch(vect[i].addr & ~NONI2C)
            {
                case SLEEP:
                    printf("SLEEP -> %d", vect[i].data);
                    break;
            }
        }
    }
}

int main(int argc, char **argv)
{
    ICM20948 driver;

    driver.WriteRegisters(vector<vector<WRITE> > INIT_CMD);
}

