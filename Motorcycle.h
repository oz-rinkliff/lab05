// Motorcycle.h is the class specification file
// Programmer: Michael Schoonmaker

#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H
#include <string>

// Motorcycle class declaration
class Motorcycle {
    private:
        string  make, model;
        int     year; 
        double  engCC,
                wheelWidth;

    public:
        void    setMake(string),
                setModel(string),
                setYear(int),
                setEngCC(string),
                setWheelWidth(string);

        string  getMake(),
                getModel();

        int     getYear();
        
        double  getEngCC(),
                getWheelWidth();

};
#endif