// Visitor.cpp is the Visitor class function implementation file
// Programmer: Oz Rinkliff

#include "Visitor.h"
#include <string>
using namespace std;


// setter functions for input
void Visitor::setName(string n) {
    name = n;
}

void Visitor::setEmail(string e) {
    email = e;
}

void Visitor::setAddress(string a) {
    address = a;
}

void Visitor::setDuration(int d) {
    duration = d;
}

void Visitor::setReason(string r) {
    reason = r;
}


// return functions for values of variables
string Visitor::getName() {return name;}

string Visitor::getEmail() {return email;}

string Visitor::getAddress() {return address;}

int Visitor::getDuration() {return duration;}

string Visitor::getReason() {return reason;}