// Invoice.cpp is the Invoice class function implementation file
// Programmers: Micheaux Simmons, Oz Rinkliff
#include <iostream>
#include <string>
#include "Invoice.h"
#include "Vendor.h"
#include "Utility.h"
using namespace std;


void Invoice::setUniqueC1d(double a) {
    uC1d = a;
}

double Invoice::getUniqueC1d() {return uC1d;}

void Invoice::printTest(Student s) {
    cout << "\n\nHELLO I HOPE THIS WORKS...\n\n";
    cout << "Your name is " << s.getName() << endl;
    cout << "Your email is " << s.getEmail() << endl;
}