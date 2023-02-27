// Vendor.cpp is the Vendor class function implementation file
// Programmer: Jerome Booth

#include "Vendor.h"
#include <string>
using namespace std;

void Vendor::setName(string input) {
    name = input;
}

string Vendor::getName() {
    return name;
}

void Vendor::setAddress(string input) {
    address = input;
}

string Vendor::getAddress() {
    return address;
}

void Vendor::setEmail(string input) {
    email = input;
}

string Vendor::getEmail() {
    return email;
}

void Vendor::setCompany(string input) {
    company = input;
}

string Vendor::getCompany() {
    return company;
}

void Vendor::setCompanyType(string input) {
    companyType = input;
}

string Vendor::getCompanyType() {
    return companyType;
}