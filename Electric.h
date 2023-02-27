// Electric.h is the class specification file
// Programmer: Oz Rinkliff

#ifndef ELECTRIC_H
#define ELECTRIC_H

#include <string>
using namespace std;

// Electric class declaration
class Electric {
    private:
    string make, model;
    int year, chargeTime, capacity;

    public:
    void setMake(string);
    void setModel(string);
    void setYear(int);
    void setChargeTime(int);
    void setCapacity(int);
    string getMake();
    string getModel();
    int getYear();
    int getChargeTime();
    int getCapacity();
};
#endif