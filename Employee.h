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
    string address {""};
    string email {""};
    string department {""};
    string professorTitle {""};
    public:
    Employee() = default;
    Employee(string n, string a, string e, string c, string p) : name{n}, address{a}, email{e}, college{c}, professorTitle{p}{}
    void setName(string);
    void setAddress(string);
    void setEmail(string);
    void setCollege(string);
    void setTitle(string);
    string getName();
    string getAddress();
    string getEmail();
    string getDepartment();
    string getTitle();

};
#endif