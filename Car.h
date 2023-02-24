// Car.h is the class specification file
// Programmer: FIXME_NAME

#ifndef CAR_H
#define CAR_H

#include <string.h>
using namespace std;

// Car class declaration
class Car {
    private:
    string make;
    string model;
    int year;
    int horsePower;
    int decibel;
    public:
    void setMake(string);
    void setModel(string);
    void setYear(int);
    void setHorsePwrt(int);
    void setDecibel(int);
    string getMake();
    string getModel();
    int getYear();
    int getHorsePwr();
    int getDecibel();
};
#endif