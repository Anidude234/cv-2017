#include <cstdlib>
#include <string>

#include "AppConfig.hpp"

AppConfig::AppConfig() :
    deviceGearID(0),
    deviceBoilerID(0),
    isFile(0),
    isBoilerDevice(0),
    isGearDevice(0),
    isHeadless(0),
    isNetworking(1),
    isDebug(0)
{
}

// Getters
std::string AppConfig::getFileName()
{
    return fileName;
}

int AppConfig::getDeviceGearID()
{
    return deviceGearID;
}

int AppConfig::getDeviceBoilerID()
{
    return deviceBoilerID;
}

int AppConfig::getIsFile()
{
    return isFile;
}

int AppConfig::getIsGearDevice()
{
    return isGearDevice;
}

int AppConfig::getIsBoilerDevice()
{
    return isBoilerDevice;
}

int AppConfig::getIsHeadless()
{
    return isHeadless;
}

int AppConfig::getIsNetworking()
{
    return isNetworking;
}

int AppConfig::getIsDebug()
{
    return isDebug;
}

// Setters
void AppConfig::setFileName(std::string inputFileName)
{
    fileName = inputFileName;
}

void AppConfig::setIsFile(int inputIsFile)
{
    isFile = inputIsFile;
}

void AppConfig::setDeviceGearID(int GdeviceID){
    deviceGearID = GdeviceID;
}

void AppConfig::setDeviceBoilerID(int BdeviceID){
    deviceBoilerID = BdeviceID;
}

void AppConfig::setIsGearDevice(int inputIsGearDevice)
{
    isGearDevice = inputIsGearDevice;
}

void AppConfig::setIsBoilerDevice(int inputIsBoilerDevice)
{
    isBoilerDevice = inputIsBoilerDevice;
}

void AppConfig::setIsHeadless(int inputIsHeadless)
{
    isHeadless = inputIsHeadless;
}

void AppConfig::setIsNetworking(int inputIsNetworking)
{
    isNetworking = inputIsNetworking;
}

void AppConfig::setIsDebug(int debug)
{
    isDebug = debug;
}
