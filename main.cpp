// Group 14 - Jerome Booth, Rebecca Noyce, Oz Rinkliff, Michael Schoonmaker, Micheaux Simmons
// Class: CPSC 1021
// Date: 02.22.2023
// Desc: FIXME_DESCRIPTION
// Time: FIXME_TIME AHHHHHH

// included libraries and header files 
#include <iostream>
#include <string>
#include "Car.h"
#include "Electric.h"
#include "Employee.h"
#include "Hybrid.h"
#include "Invoice.h"
#include "Motorcycle.h"
#include "Student.h"
#include "Utility.h"
#include "Vendor.h"
#include "Visitor.h"
using namespace std;

int main() {
    // variable declarations
    int customerType, vehicleType, year, unique1i, unique2i, numDays;
    double unique1d, unique2d;
    string name, address, email, unique1s, unique2s, make, model;
    char permitType, paymentMthd;

    // prints welcome message and initial menu
    cout << "*********************************************************************************\n";
    cout << "*     Welcome to the Clemson University Parking and Transportation Services     *\n";
    cout << "*                                                                               *\n";
    cout << "*         This program will print out an invoice for your parking pass.         *\n";
    cout << "*********************************************************************************\n\n\n";
    cout << "The following menu lists the customer type:\n\n\t1 - Visitor\n\t2 - Student\n\t3 - Employee\n\t4 - Vendor\n\n";
    cout << "Enter the number corresponding to your identification: ";
    cin >> customerType;

    // input for universal variables
    cout << "\n\tEnter your Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "\tEnter your Email: ";
    getline(cin, email);
    cout << "\tEnter your Address: ";
    getline(cin, address);

    // switch statement for customer type used for getting unique traits and creating class objects
    switch (customerType) {
        // visitor
        case 1:
        cout << "\tEnter the numer of hours for your duration on campus: ";
        cin >> unique1d;
        cout << "\tEnter your reason for visiting campus: ";
        getline(cin, unique2s);

        Visitor visitor;
        visitor.setName(name);
        visitor.setEmail(email);
        visitor.setAddress(address);
        visitor.setDuration(unique1d)
        visitor.setReason(unique2s);
        break;

        // student
        case 2:
        cout << "\tEnter your major: ";
        getline(cin, unique1s);
        cout << "\tEnter your class standing: ";
        getline(cin, unique2s);

        Student student;
        student.setName(name);
        student.setEmail(email);
        student.setAddress(address);
        student.setMajor(unique1s)
        student.setClassYear(unique2s);
        break;

        // employee
        case 3:
        cout << "\tEnter your department: ";
        getline(cin, unique1s);
        cout << "\tEnter your title: ";
        getline(cin, unique2s);

        Employee employee;
        employee.setName(name);
        employee.setEmail(email);
        employee.setAddress(address);
        employee.setDepartment(unique1s)
        employee.setTitle(unique2s);
        break;

        // vendor
        case 4:
        cout << "\tEnter the name of your company: ";
        getline(cin, unique1s);
        cout << "\tEnter the company type: ";
        getline(cin, unique2s);

        Vendor vendor;
        vendor.setName(name);
        vendor.setEmail(email);
        vendor.setAddress(address);
        vendor.setCompany(unique1s)
        vendor.setCompanyType(unique2s);
        break;
    }


    // prints car menu and inputs vehicle type
    cout << "\n\nThe following menu lists the vehicle type:\n\n\t1 - Car\n\t2 - Motorcycle\n\t3 - Hybrid\n\t4 - Electric\n\t5 - Utility\n\n";
    cout << "Enter the number corresponding to your vehicle type: ";
    cin >> vehicleType;

     // input for universal vehicle variables
    cout << "\n\tEnter the Make: ";
    cin.ignore();
    getline(cin, make);
    cout << "\tEnter the Model: ";
    getline(cin, model);
    cout << "\tEnter the Year: ";
    cin >> year;

    // switch statement for vehicle type used for getting unique traits and creating class objects
    switch (vehicleType) {
        // car
        case 1:
        cout << "\tEnter the Horse Power: ";
        cin >> unique1i;
        cout >> "\tEnter the Decibel Level of the Engine: ";
        cin >> unique2i;

        Car car;
        car.setMake(make);
        car.setModel(model);
        car.setYear(year);
        car.setHorsePwr(unique1i);
        car.setDecibel(unique2i);
        break;

        // motorcycle
        case 2:
        cout << "\tEnter the Engine's CC: ";
        cin >> unique1i;
        cout >> "\tEnter the Wheel Width: ";
        cin >> unique2d;

        Motorcycle motorcycle;
        motorcycle.setMake(make);
        motorcycle.setModel(model);
        motorcycle.setYear(year);
        motorcycle.setEngineCC(unique1i);
        motorcycle.setWheelWidth(unique2d);
        break;

        // hybrid
        case 3:
        cout << "\tEnter the MPG: ";
        cin >> unique1d;
        cout >> "\tEnter the Drivetrain (RWD/FWD/AWD/4WD): ";
        getline(cin, unique2s);

        Hybrid hybrid;
        hybrid.setMake(make);
        hybrid.setModel(model);
        hybrid.setYear(year);
        hybrid.setMPG(unique1d);
        hybrid.setDrivetrain(unique2s);
        break;

        // electric
        case 4:
        cout << "\tEnter the Charge Time (in minutes): ";
        cin >> unique1i;
        cout >> "\tEnter the Battery Capacity (in kWh): ";
        cin >> unique2i;

        Electric electric;
        electric.setMake(make);
        electric.setModel(model);
        electric.setYear(year);
        electric.setChargeTime(unique1i);
        electric.setCapactiy(unique2i);
        break;

        // utility
        case 5:
        cout << "\tEnter the Vehicle's Weight: ";
        cin >> unique1d;
        cout >> "\tEnter the License Plate: ";
        cin >> unique2s;

        Utility utility;
        utility.setMake(make);
        utility.setModel(model);
        utility.setYear(year);
        utility.setWeight(unique1d);
        utility.setLicencePlate(unique2s);
        break;
    }


    // gets number of days for visitors/vendors
    if (customerType == 1 || customerType == 4) {
        cout << "\n\nEnter the number of days your will need a permit for: ";
        cin >> numDays;
    }

    // gets permit type for visitors/vendors
    if (customerType == 2 || customerType == 3) {
        cout << "\n\nEnter 'S' for a semester permit or 'A' for an annual permit: ";
        cin >> permitType;
    }

    cout << "Enter 'C' if paying with credit/debit card  or 'O' for other payment method: ";
    cin >> paymentMthd;

    cout << "\nThank you! Generating your invoice now...\n\n\n";
    cout << "*********************************************************************************\n";
    cout << "*            Clemson University Parking and Transportation Services             *\n";
    cout << "*                                                                               *\n";
    cout << "*                             Parking Pass Invoice                              *\n";
    cout << "*********************************************************************************\n\n";

    //FIXME_INVOICE_CLASS_PRINT

    return 0;
}
