// Motorcycle.h is the class specification file
// Programmer: Michael Schoonmaker

#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H
#include <string>
using namespace std;

// Motorcycle class declaration
class Motorcycle {
    private:
        string  make, model;
        int     year, engCC, wheelWidth; 

    public:
        void    setMake(string),
                setModel(string),
                setYear(int),
                setEngCC(int),
                setWheelWidth(int);

        string  getMake(),
                getModel();

        int     getYear(),
                getEngCC(),
                getWheelWidth();

};
#endif