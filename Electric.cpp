// Electric.cpp is the Electric class function implementation file
// Programmer: Oz Rinkliff

#include "Electric.h"
#include <string>
using namespace std;


// setter functions for input
void Electric::setMake(string m) {
    make = m;
}

void setModel(string mo) {
    model = mo;
}

void setYear(int y) {
    year = y;
}

void setChargeTime(int c) {
    chargeTime = c;
}

void setCapacity(int ca) {
    capacity = ca;
}

// return functions for values of variables
string getMake() {return make;}

string getModel() {return model;}

int getYear() {return year;}

int getChargeTime() {return chargeTime;}

int getCapacity() {return batteryCapacity;}