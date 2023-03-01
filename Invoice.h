// Invoice.h is the class specification file
// Programmer: Oz Rinkliff
#ifndef INVOICE_H
#define INVOICE_H

#include "Car.h"
#include "Electric.h"
#include "Employee.h"
#include "Hybrid.h"
#include "Motorcycle.h"
#include "Student.h"
#include "Utility.h"
#include "Vendor.h"
#include "Visitor.h"
#include <string>
using namespace std;

// Invoice class declaration
class Invoice {
private:
    int cT, vT, d, y;
    string  n, e, a, 
            u1c, u2c,
            mA, mO, 
            u1v, u2v;
    char pT, pM;
public:
    void setCT(int);
    void setVT(int);
    void setD(int);
    void setPT(char);
    void setPM(char);
    //
    //
    //
    //
    //
    //
    //
    //
    //
    double subTotal();
    double serviceCharge();
    double discount();
    double total();
    void printInvoice();
};
#endif
