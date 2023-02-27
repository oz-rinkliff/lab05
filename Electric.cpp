// Electric.cpp is the Electric class function implementation file
// Programmer: Oz Rinkliff

#include "Electric.h"
using namespace std;

void setMake(string input) {
    make = input;
}

void setModel(string input) {
    model = input;
}

void setYear(int input) {
    year = input;
}

void setChargeTime(double input) {
    chargeTime = input;
}

void setBatteryCapacity(double input) {
    batteryCapacity = input;
}

string getMake() {
    return make;
}

string getModel() {
    return model;
}

int getYear() {
    return year;
}

double getChargeTime() {
    return chargeTime;
}

double getBatteryCapacity() {
    return batteryCapacity;
}

// FIXME_ADD_FUNCTIONS