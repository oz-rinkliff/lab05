// Employee.h is the class specification file
// Programmer: Jerome Booth

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

// Employee class declaration
class Employee {
    private:
    string name;
    string email;
    string address;
    string department;
    string title;
    public:
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