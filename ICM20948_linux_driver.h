#include <sys/types.h>


class ICM20948LinuxDriver
{
    private:
        int     fp;
        uint8_t i2c_address;
        bool    initialized;

    public:
        ICM20948LinuxDriver(char *);
        int intialized(void)
        {
            return initialized;
        }
}

