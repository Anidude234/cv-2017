#ifndef AppConfig_hpp
#define AppConfig_hpp

#include <string>

class AppConfig
{
    public:
        AppConfig();
        void setFileName(std::string fileName);
        void setDeviceGearID(int GdeviceID);
        void setDeviceBoilerID(int BdeviceID);
        void setIsFile(int isFile);
        void setIsBoilerDevice(int isBoilerDevice);
        void setIsGearDevice(int isGearDevice);
        void setIsHeadless(int isHeadless);
        void setIsNetworking(int isNetworking);
        void setIsDebug(int debug);
        int getDeviceBoilerID();
        int getDeviceGearID();
        int getIsFile();
        int getIsBoilerDevice();
        int getIsGearDevice();
        int getIsHeadless();
        int getIsNetworking();
        int getIsDebug();
        std::string getFileName();
    private:
        std::string fileName;
        int deviceBoilerID;
        int deviceGearID;
        int isFile;
        int isBoilerDevice;
        int isGearDevice;
        int isHeadless;
        int isNetworking;
        int isDebug;
};

#endif /* AppConfig_hpp */
