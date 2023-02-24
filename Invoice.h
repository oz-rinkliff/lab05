// Invoice.h is the class specification file
// Programmer: Micheaux Simmons
#include <string>
#ifndef INVOICE_H_
#define INVOICE_H_

// Invoice class declaration
class Invoice {
private:
    double permitPrice;
public:
    void calcPermitPrice(int);
    double getPermitPrice();
    
    void printInvoice(std::string, std::string);
};
#endif