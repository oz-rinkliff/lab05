// Invoice.cpp is the Invoice class function implementation file
// Programmer: Oz Rinkliff
#include <iostream>
#include <iomanip>
#include <string>
#include "Invoice.h"
using namespace std;


// setter functions
void Invoice::setCT(int i) {
    cT = i;
}

void Invoice::setVT(int i) {
    vT = i;
}

void Invoice::setD(int i) {
    d = i;
}

void Invoice::setPT(char i) {
    pT = i;
}

void Invoice::setPM(char i) {
    pM = i;
}


double subTotal() {
    double sub = 0;

}

void Invoice::printInvoice() {
    cout << "\nThank you! Generating your invoice now...\n\n\n";
    cout << "*********************************************************************************\n";
    cout << "*            Clemson University Parking and Transportation Services             *\n";
    cout << "*                                                                               *\n";
    cout << "*                             Parking Pass Invoice                              *\n";
    cout << "*********************************************************************************\n\n";
    cout << "Customer Type: ";
        switch (cT) {
            case 1: cout << "Visitor\n\n"; break;
            case 2: cout << "Student\n\n"; break;
            case 3: cout << "Employee\n\n"; break;
            case 4: cout << "Vendor\n\n"; break;
        }
    cout << "\tName: " << n << endl;
    cout << "\tEmail: " << e << endl;
    cout << "\tAddress: " << a << endl;
        switch (cT) {
            case 1: 
                cout << "\tDuration on Campus: " << u1c << " hours\n";
                cout << "\tReason for Visiting: " << u2c << endl << endl;
                break;
            case 2:
                cout << "\tMajor: " << u1c << endl;
                cout << "\tClass Standing: " << u2c << endl << endl;
                break;
            case 3:
                cout << "\tDepartment: " << u1c << endl;
                cout << "\tTitle: " << u2c << endl << endl;
                break;
            case 4:
                cout << "\tCompany Name: " << u1c << endl;
                cout << "\tCompany Type: " << u2c << endl << endl;
                break;
        }
    cout << "Vehicle Type: ";
        switch (vT) {
            case 1: cout << "Car\n\n"; break;
            case 2: cout << "Motorcycle\n\n"; break;
            case 3: cout << "Hybrid\n\n"; break;
            case 4: cout << "Electric\n\n"; break;
            case 5: cout << "Utility\n\n"; break;
        }
    cout << "\tMake: " << mA << endl;
    cout << "\tModel: " << mO << endl;
    cout << "\tYear: " << y << endl;
        switch (vT) {
            case 1: 
                cout << "\tHorse Power: " << u1v << endl;
                cout << "\tDecibel Level: " << u2v << endl << endl;
                break;
            case 2:
                cout << "\tEngine Size: " << u1v << "CC\n";
                cout << "\tWheel Width: " << u2v << endl << " in.\n";
                break;
            case 3:
                cout << "\tMPG: " << u1v << endl;
                cout << "\tDrivetrain: " << u2v << endl << endl;
                break;
            case 4:
                cout << "\tCharge Time: " << u1v << " minutes\n";
                cout << "\tBattery Capacity: " << u2v << endl << " kWh\n";
                break;
            case 5:
                cout << "\tWeight: " << u1v << endl;
                cout << "\tLicense Plate: " << u2v << endl << endl;
                break;
        }
    cout << fixed << setprecision(2);
    if (cT == 1 || cT == 4) cout << "Number of Days: " << d << endl << endl;
    if (cT == 2 || cT == 3) cout << "Permit Type: " << pT << endl << endl;
    // SUBTOTAL_FIXME
    // if (pM == 'C') cout << "Service Charge (4%): $" << serviceCharge() << endl << endl << endl;
    // DISCOUNT_FIXME
    //cout << "Total: $" << total() << endl << endl;
}