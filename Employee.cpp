// Employee.cpp is the Employee class function implementation file
// Programmer: Jerome Booth

#include "Employee.h"
using namespace std;

    void Employee::setName(string input) {
        name = input;
    }

    void Employee::setEmail(string input) {
        email = input;
    }

    void Employee::setAddress(string input) {
        address = input;
    }

    void Employee::setDepartment(string input) {
        department = input;
    }

    void Employee::setTitle(string input) {
        title = input;
    }

    string Employee::getName() {
        return name;
    }

    string Employee::getEmail() {
        return email;
    }

    string Employee::getAddress() {
        return address;
    }

    string Employee::getDepartment() {
        return department;
    }

    string Employee::getTitle() {
        return title;
    }

// FIXME_ADD_FUNCTIONS