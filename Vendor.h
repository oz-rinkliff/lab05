// Vendor.h is the class specification file
// Programmer: FIXME_NAME

#ifndef VENDOR_H_
#define VENDOR_H_
#include <string>

// Vendor class declaration
class Vendor {
    private:
        string name;
        string address;
        string email;
        string company;
        string companyType;

    public: 
        void setName(string);
        string getName();
        void setEmail(string);
        string getEmail();
        void setAddress(string);
        string getAddress();
        void setCompany(string);
        string getCompany();
        void setCompanyType(string);
        string getCompanyType();
};

#endif