// Car.h is the class specification file
// Programmer: Jerome Booth

#ifndef CAR_H
#define CAR_H

#include <string>
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
    void setHorsePwr(int);
    void setDecibel(int);
    string getMake();
    string getModel();
    int getYear();
    int getHorsePwr();
    int getDecibel();
};
#endif