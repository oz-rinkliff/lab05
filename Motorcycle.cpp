// Motorcycle.cpp is the Motorcycle class function implementation file
// Programmer: Michael Schoonmaker

#include "Motorcycle.h"
#include <iostream>
#include <string>

// "Setter" functions meant to set the value of a specific
// variable based off of user input

void Motorcycle::setMake(string ma){
    make = ma;
};

void Motorcycle::setModel(string mo){
    model = mo;
};

void Motorcycle::setYear(int y){
    year = y;
};

void Motorcycle::setEngCC(double ec){
    engCC = ec;
};

void Motorcycle::setWheelWidth(double ww){
    wheelWidth = ww;
};

// "Getter" functions meant to return designated variable

string Motorcycle::getMake(){
    return make;
};

string Motorcycle::getModel(){
    return model;
};

int Motorcycle::getYear(){
    return year;
};

double Motorcycle::getEngCC(){
    return engCC;
};

double Motorcycle::getWheelWidth(){
    return wheelWidth;
};