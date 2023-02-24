// Utility.h is the class specification file
// Programmer: FIXME_NAME

#include <string>
#ifndef UTILITY_H
#define UTILITY_H
using namespace std;

class Utility{
private:
    string make;
    string model;
    int year;
    string color;
    int licencePlate;
public:
    Utility();
    Utility(string, string, int, string, int);
    void setMake(string);
    void setModel(string);
    void setYear(int);
    void setColor(string);
    void setLicencePlate(int);
    string getMake();
    string getModel();
    int getYear();
    string getColor();
    int getLicencePlate();
};
#endif