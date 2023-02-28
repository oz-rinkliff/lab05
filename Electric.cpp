// Electric.cpp is the Electric class function implementation file
// Programmer: Oz Rinkliff

#include "Electric.h"
#include <string>
using namespace std;


// setter functions for input
void Electric::setMake(string m) {
    make = m;
}

void Electric::setModel(string mo) {
    model = mo;
}

void Electric::setYear(int y) {
    year = y;
}

void Electric::setChargeTime(int c) {
    chargeTime = c;
}

void Electric::setCapacity(int ca) {
    capacity = ca;
}

// return functions for values of variables
string Electric::getMake() {return make;}

string Electric::getModel() {return model;}

int Electric::getYear() {return year;}

int Electric::getChargeTime() {return chargeTime;}

int Electric::getCapacity() {return batteryCapacity;}