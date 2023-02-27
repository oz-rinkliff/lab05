// Utility.h is the class specification file
// Programmer: Micheaux Simmons

#ifndef UTILITY_H
#define UTILITY_H

#include <string>
using namespace std;

class Utility{
private:
    string make;
    string model;
    int year;
    double weight;
    string licencePlate;
public:
    Utility();
    Utility(string, string, int, double, string);
    
    void setMake(string);
    void setModel(string);
    void setYear(int);
    void setWeight(double);
    void setLicencePlate(string);
    
    string getMake();
    string getModel();
    int getYear();
    double getWeight();
    string getLicencePlate();
};
#endif
