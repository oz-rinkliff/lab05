// Group 14 - Jerome Booth, Madison Noyce, Oz Rinkliff, Michael Schoonmaker, Micheaux Simmons
// Class: CPSC 1021
// Date: 02.27.2023
// Desc: This program will print an invoice based on user menu selections and input
// Time: 2 weeks

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
    Invoice invoice;

    // prints welcome message and initial menu
    cout << "\n*********************************************************************************\n";
    cout << "*     Welcome to the Clemson University Parking and Transportation Services     *\n";
    cout << "*                                                                               *\n";
    cout << "*         This program will print out an invoice for your parking pass.         *\n";
    cout << "*********************************************************************************\n\n\n";
    cout << "The following menu lists the customer type:\n\n\t1 - Visitor\n\t2 - Student\n\t3 - Employee\n\t4 - Vendor\n\n";
    cout << "Enter the number corresponding to your identification: ";
    cin >> customerType;
    invoice.setCT(customerType);

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
        case 1: {
        cout << "\tEnter the number of hours for your duration on campus: ";
        cin >> unique1i;
        cout << "\tEnter your reason for visiting campus: ";
        cin.ignore();
        getline(cin, unique2s);

        Visitor visitor;
        visitor.setName(name);
        visitor.setEmail(email);
        visitor.setAddress(address);
        visitor.setDuration(unique1i);
        visitor.setReason(unique2s);

        invoice.setVarsC(visitor);
        break;
        }

        // student
        case 2: {
        cout << "\tEnter your Major: ";
        getline(cin, unique1s);
        cout << "\tEnter your Class Standing: ";
        getline(cin, unique2s);

        Student student;
        student.setName(name);
        student.setEmail(email);
        student.setAddress(address);
        student.setMajor(unique1s);
        student.setClassYear(unique2s);

        invoice.setVarsC(student);
        break;
        }

        // employee
        case 3: {
        cout << "\tEnter your Department: ";
        getline(cin, unique1s);
        cout << "\tEnter your Title: ";
        getline(cin, unique2s);

        Employee employee;
        employee.setName(name);
        employee.setEmail(email);
        employee.setAddress(address);
        employee.setDepartment(unique1s);
        employee.setTitle(unique2s);

        invoice.setVarsC(employee);
        break;
        }

        // vendor
        case 4: {
        cout << "\tEnter the Name of your Company: ";
        getline(cin, unique1s);
        cout << "\tEnter the Company Type: ";
        getline(cin, unique2s);

        Vendor vendor;
        vendor.setName(name);
        vendor.setEmail(email);
        vendor.setAddress(address);
        vendor.setCompany(unique1s);
        vendor.setCompanyType(unique2s);

        invoice.setVarsC(vendor);
        break;
        }
    }

    // prints car menu and inputs vehicle type
    cout << "\n\nThe following menu lists the vehicle type:\n\n\t1 - Car\n\t2 - Motorcycle\n\t3 - Hybrid\n\t4 - Electric\n\t5 - Utility\n\n";
    cout << "Enter the number corresponding to your vehicle type: ";
    cin >> vehicleType;
    invoice.setVT(vehicleType);

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
        case 1: {
        cout << "\tEnter the Horse Power: ";
        cin >> unique1i;
        cout << "\tEnter the Decibel Level of the Engine: ";
        cin >> unique2i;

        Car car;
        car.setMake(make);
        car.setModel(model);
        car.setYear(year);
        car.setHorsePwr(unique1i);
        car.setDecibel(unique2i);

        invoice.setVarsV(car);
        break;
        }

        // motorcycle
        case 2: {
        cout << "\tEnter the Engine's CC: ";
        cin >> unique1i;
        cout << "\tEnter the Wheel Width (in inches): ";
        cin >> unique2i;

        Motorcycle motorcycle;
        motorcycle.setMake(make);
        motorcycle.setModel(model);
        motorcycle.setYear(year);
        motorcycle.setEngCC(unique1i);
        motorcycle.setWheelWidth(unique2i);

        invoice.setVarsV(motorcycle);
        break;
        }

        // hybrid
        case 3: {
        cout << "\tEnter the MPG: ";
        cin >> unique1d;
        cout << "\tEnter the Drivetrain (RWD/FWD/AWD/4WD): ";
        cin.ignore();
        getline(cin, unique2s);

        Hybrid hybrid;
        hybrid.setMake(make);
        hybrid.setModel(model);
        hybrid.setYear(year);
        hybrid.setMPG(unique1d);
        hybrid.setDrivetrain(unique2s);

        invoice.setVarsV(hybrid);
        break;
        }

        // electric
        case 4: {
        cout << "\tEnter the Charge Time (in minutes): ";
        cin >> unique1i;
        cout << "\tEnter the Battery Capacity (in kWh): ";
        cin >> unique2i;

        Electric electric;
        electric.setMake(make);
        electric.setModel(model);
        electric.setYear(year);
        electric.setChargeTime(unique1i);
        electric.setCapacity(unique2i);

        invoice.setVarsV(electric);
        break;
        }

        // utility
        case 5: {
        cout << "\tEnter the Vehicle's Weight: ";
        cin >> unique1d;
        cout << "\tEnter the License Plate: ";
        cin.ignore();
        cin >> unique2s;

        Utility utility;
        utility.setMake(make);
        utility.setModel(model);
        utility.setYear(year);
        utility.setWeight(unique1d);
        utility.setLicencePlate(unique2s);

        invoice.setVarsV(utility);
        break;
        }
    }

    // gets number of days for visitors/vendors
    if (customerType == 1 || customerType == 4) {
        cout << "\n\nEnter the number of days your will need a permit for: ";
        cin >> numDays;
        invoice.setD(numDays);
    }

    // gets permit type for visitors/vendors
    if (customerType == 2 || customerType == 3) {
        cout << "\n\nEnter 'S' for a semester permit or 'A' for an annual permit: ";
        cin >> permitType;
        invoice.setPT(permitType);
    }

    // gets payment method
    cout << "Enter 'C' if paying with credit/debit card  or 'O' for other payment method: ";
    cin >> paymentMthd;
    invoice.setPM(paymentMthd);

    // Invoice Class function prints invoice
    invoice.printInvoice();

    return 0;
}
