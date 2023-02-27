// Group 14 - Jerome Booth, Rebecca Noyce, Oz Rinkliff, Michael Schoonmaker, Micheaux Simmons
// My Class: CPSC 1021
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
    int customerType, vehicleType;
    double unique1d;
    string name, address, email, unique1s, unique2;

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
        getline(cin, unique2);

        Visitor visitor;
        visitor.setName(name);
        visitor.setEmail(email);
        visitor.setAddress(address);
        visitor.setDuration(unique1d)
        visitor.setReason(unique2);
        break;

        // student
        case 2:
        cout << "\tEnter your major: ";
        getline(cin, unique1s);
        cout << "\tEnter your class standing: ";
        getline(cin, unique2);

        Student student;
        student.setName(name);
        student.setEmail(email);
        student.setAddress(address);
        student.setMajor(unique1s)
        student.setClassYear(unique2);
        break;

        // employee
        case 3:
        cout << "\tEnter your department: ";
        getline(cin, unique1s);
        cout << "\tEnter your title: ";
        getline(cin, unique2);

        Employee employee;
        employee.setName(name);
        employee.setEmail(email);
        employee.setAddress(address);
        employee.setDepartment(unique1s)
        employee.setTitle(unique2);
        break;

        // vendor
        case 4:
        cout << "\tEnter the name of your company: ";
        getline(cin, unique1s);
        cout << "\tEnter the type of your company: ";
        getline(cin, unique2);

        Vendor vendor;
        vendor.setName(name);
        vendor.setEmail(email);
        vendor.setAddress(address);
        vendor.setCompany(unique1s)
        vendor.setCompanyType(unique2);
        break;

    }


// FIXME_EVERYTHING_BELOW


    //function to calculate dicount and instance of Invoice object
    Invoice invoice;
    invoice.calcPermitPrice(permitType);
    

    cout << "Enter your vehicle type:(1,2,3 or 4):" << endl;
    cin >> vehicleType;

    //if else tree for Vechical type.
   
    if (vehicleType == 1){
        Utility utility;

        cout << "Enter your vehicle make: " << endl;
        cin.ignore();
        getline(cin, temp2);
        utility.setMake(temp2);

        cout << "Enter your vehicle model: " << endl;
        getline(cin, temp2);
        utility.setModel(temp2);

        cout << "Enter your vehicle year: " << endl;
        cin >> vehicleType;
        temp3 = to_string(utility.getYear());

        cout << "Enter your vehicle color: " << endl;
        getline(cin, temp2);
        utility.setColor(temp2);

        cout << "Enter your License Plate number: " << endl;
        cin >> vehicleType;
        temp4 = to_string(utility.getLicencePlate());

        temp2 = utility.getMake() + "\n" + utility.getModel() + "\n" + temp3 + "\n" + utility.getColor() + "\n" + temp4;
    }
    if (vehicleType == 2){
        Motorcycle motorcycle;
    }
    if(vehicleType == 3){
        Car car;
    }
    if(vehicleType == 4){
        Hybrid hybrid;
    }
    //print invoice
    invoice.printInvoice(temp1, temp2);
    return 0;
}
