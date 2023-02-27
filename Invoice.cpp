// Invoice.cpp is the Invoice class function implementation file
// Programmers: Micheaux Simmons, Oz Rinkliff
#include <iostream>
#include <string>
#include "Invoice.h"
#include "Vendor.h"
#include "Utility.h"
using namespace std;

void Invoice::calcPermitPrice(int p){
    //if student
    if (p == 1)
    {
        permitPrice = 10;
    }
    //if employee
    else if (p == 2) 
    {
        permitPrice = 100.00;
    }
    //if Vendor
    else if (p == 3)
    {
        permitPrice = 100.00;
    }
    //if visitor
    else if (p == 4)
    {
        permitPrice = 100;
    }
}

double Invoice::getPermitPrice(){
    return permitPrice;
}

void Invoice::printInvoice(string p , string v) {
    cout << "Invoice" << endl;
    cout << "-------------------" << endl;
    cout <<  p << endl;
    cout << v << endl;
    cout << "Service Charge: $10" << endl;
    cout << "Total: $" << getPermitPrice() + 10 << endl;
}
// FIXME_ADD_FUNCTIONS