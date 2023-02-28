// Invoice.h is the class specification file
// Programmers: Micheaux Simmons, Oz Rinkliff
#ifndef INVOICE_H
#define INVOICE_H
#include <string>
using namespace std;

// Invoice class declaration
class Invoice {
private:
    //int type;
    //double price;
    double uC1d;
public:
    void setUniqueC1d(double);
    double getUniqueC1d();
    void printTest(Student);
    //void calcPermitPrice(int);
    //double getPermitPrice();
   // void printInvoice(string, string);
};
#endif
