// Student.h is the class specification file
// Programmer: Micheaux Simmons

#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>
using namespace std;

// Student class declaration
class Student {
private:
    string name;
    string address;
    string email;
    string classYear;
    string major;
public:
    void setName(string n);
    void setAddress(string a);
    void setEmail(string e);
    void setClassYear(string y);
    void setMajor(string m);
    string getName();
    string getAddress();
    string getEmail();
    string getClassYear();
    string getMajor();
};
#endif