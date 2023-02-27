// Car.cpp is the Car class function implementation file
// Programmer: Jerome Booth
#include "Car.h"
#include <string>
using namespace std;


void Car::setMake(string input) {
    make = input;
}

void Car::setModel(string input) {
    model = input;
}

void Car::setYear(int input) {
    year = input;
}

void Car::setDecibel(int input) {
    decibel = input;
}

void Car::setHorsePwr(int input) {
    horsePower = input;
}

string Car::getMake() {
    return make;
}

string Car::getModel() {
    return model;
}

int Car::getYear() {
    return year;
}

int Car::getDecibel() {
    return decibel;
}

int Car::getHorsePwr() {
    return horsePower;
}
