// Visitor.h is the class specification file
// Programmer: Oz Rinkliff

#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

// Visitor class declaration
class Visitor {
    private:
        string name, email, address, reason;
        double duration; 
        
    public:
        void setName(string);
        void setEmail(string);
        void setAddress(string);
        void setDuration(double);
        void setReason(string);
        string getName();
        string getEmail();
        string getAddress();
        double getDuration();
        string getReason();
};
#endif