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