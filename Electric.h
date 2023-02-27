// Electric.h is the class specification file
// Programmer: Oz Rinkliff

#ifndef ELECTRIC_H
#define ELECTRIC_H

#include <string>

// Electric class declaration
class Electric {
    private:
    string make;
    string model;
    int year;
    double chargeTime;
    double batteryCapacity;

    //PRIVATE_FIXME
    public:
    void setMake(string);
    void setModel(string);
    void setYear(int);
    void setChargeTime(double);
    void setBatteryCapacity(double);
    string getMake();
    string getModel();
    int getYear();
    double getChargeTime();
    double getBatteryCapacity();

    //PUBLIC_FIXME
};
#endif