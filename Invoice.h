// Invoice.h is the class specification file
// Programmers: Micheaux Simmons, Oz Rinkliff
#ifndef INVOICE_H
#define INVOICE_H
#include <string>
using namespace std;

// Invoice class declaration
class Invoice {
private:
    double permitPrice;
public:
    void calcPermitPrice(int);
    double getPermitPrice();
    void printInvoice(string, string);
};
#endif
