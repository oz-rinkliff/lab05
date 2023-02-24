// Car.cpp is the Car class function implementation file
// Programmer: FIXME_NAME
#include "Car.h"


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

void Car::setHorsepower(int input) {
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

int Car::getHorsepower() {
    return horsePower;
}
