// Student.h is the class specification file
// Programmer: Micheaux Simmons

#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

// Student class declaration
class Student {
private:
    string name;
    string email;
    string address;
    string major;
    string classYear;
public:
    void setName(string n);
    void setEmail(string e);
    void setAddress(string a);
    void setClassYear(string y);
    void setMajor(string m);
    string getName();
    string getEmail();
    string getAddress();
    string getMajor();
    string getClassYear();
};
#endif
