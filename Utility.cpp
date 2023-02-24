// Utility.cpp is the Utility class function implementation file
// Programmer: Micheaux Simmons
#include <iostream>
#include <iomanip>
#include <string>
#include "Utility.h"
using namespace std;

Utility::Utility(){
}
void Utility::setMake(string m){
    make = m;
}
void Utility::setModel(string o){
    model = o;
}
void Utility::setYear(int y){
    year = y;
}
void Utility::setColor(string c){
    color = c;
}
void Utility::setLicencePlate(int l){
    licencePlate = l;
}
string Utility::getMake(){
    return make;
}
string Utility::getModel(){
    return model;
}
int Utility::getYear(){
    return year;
}
string Utility::getColor(){
    return color;
}
int Utility::getLicencePlate(){
    return licencePlate;
}
// FIXME_ADD_FUNCTIONS