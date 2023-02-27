// Employee.h is the class specification file
// Programmer: FIXME_NAME

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string.h>
using namespace std;

// Employee class declaration
class Employee {
    private:
    string name {""};
    string email {""};
    string address {""};
    string department {""};
    string professorTitle {""};
    public:
    Employee() = default;
    Employee(string n, string e, string a, string d, string p) : name{n}, email{e}, address{a}, department{d}, professorTitle{p}{}
    void setName(string);
    void setEmail(string);
    void setAddress(string);
    void setDepartment(string);
    void setTitle(string);
    string getName();
    string getEmail();
    string getAddress();
    string getDepartment();
    string getTitle();

};
#endif