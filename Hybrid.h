// Hybrid.h is the class specification file
// Programmer: Michael Schoonmaker

#ifndef HYBRID_H
#define HYBRID_H
#include <string>
using namespace std;

// Hybrid class declaration
class Hybrid {
    private:
        string  make, model, drivetrain;
        int     year;
        double  mpg;

    public:
        void    setMake(string),
                setModel(string),
                setYear(int),
                setMPG(double),
                setDrivetrain(string);
        
        string  getMake(),
                getModel(),
                getDrivetrain();

        int     getYear();
        
        double  getMPG();
};
#endif