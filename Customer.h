
/*
 * Purpose : Get Customer Information
 * Author : Mohammad Aslam Bin Azman
 * Date : 9 January 2025
*/

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <ostream>
#include <fstream>
using namespace std;

class Customer {
private:
    string name;
    string phone;
public:
    void registerCustomer();
    string getName() const { return name; }
    string getPhone() const { return phone; }
    friend ostream& operator<<(ostream& os, const Customer& customer); // Overload <<
    friend ofstream& operator<<(ofstream& os, const Customer& customer); // Overload << for file
};

#endif