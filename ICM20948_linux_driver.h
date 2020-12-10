#include <sys/types.h>
#include <vector>
#include "ICM20948_registers.h"

using namespace std;

class ICM20948LinuxDriver
{
    private:
        int     fp;
        uint8_t i2c_address;
        bool    initialized;

        uint8_t ReadRegister(uint8_t addr);
        int WriteRegister(WRITE &);
        int WriteRegisters(vector<WRITE>);
        int WriteCommands(vector<vector<WRITE> >);

    public:
        ICM20948LinuxDriver(char *, uint8_t addr);
        ~ICM20948LinuxDriver();
        int ReadIMUData(void);
        int GetIntialized(void)
        {
            return initialized;
        }
        void DumpData(DATA &data)
        {
            printf("ID: %02x\n", data.id);
            printf("Accel: %04x %04x %04x\n", data.ax, data.ay, data.az);
            printf("Gyro: %04x %04x %04x\n", data.gx, data.gy, data.gz);
            printf("Mag: %04x %04x %04x\n", data.mx, data.my, data.mz);
            printf("Status: %04x\n", data.magstat);
            printf("Temp: %04x\n", data.temp);
        }
};

