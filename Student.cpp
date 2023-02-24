// Student.cpp is the Student class function implementation file
// Programmer: Micheaux Simmons
#include <iostream>
#include <iomanip>
#include <string>
#include "Student.h"
using namespace std;

void Student::setName(string n){
    name = n;
}
void Student::setAddress(string a){
    address = a;
}
void Student::setEmail(string e){
    email = e;
}
void Student::setClassYear(string y){
    classYear = y;
}
void Student::setMajor(string m){
    major = m;
}
string Student::getName(){
    return name;
}
string Student::getAddress(){
    return address;
}
string Student::getEmail(){
    return email;
}
string Student::getClassYear(){
    return classYear;
}
string Student::getMajor(){
    return major;
}
// FIXME_ADD_FUNCTIONS