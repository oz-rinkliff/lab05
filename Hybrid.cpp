// Hybrid.cpp is the Hybrid class function implementation file
// Programmer: Michael Schoonmaker

#include "Hybrid.h"
#include <iostream>
#include <string>

// "Setter" functions meant to set the value of a specific
// variable based off of user input

void Hybrid::setMake(string ma){
    make = ma;
};

void Hybrid::setModel(string mo){
    model = mo;
};

void Hybrid::setYear(int y){
    year = y;
};

void Hybrid::setMPG(double mp){
    mpg = mp;
};

void Hybrid::setDrivetrain(string dt){
    drivetrain = dt;
};

// "Getter" functions meant to return designated variable

string Hybrid::getMake(){
    return make;
};

string Hybrid::getModel(){
    return model;
};

int Hybrid::getYear(){
    return year;
};

double Hybrid::getMPG(){
    return mpg;
};

string Hybrid::getDrivetrain(){
    return drivetrain;
};