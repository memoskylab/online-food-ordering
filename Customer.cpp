
/*
 * Purpose : Get Customer Information
 * Author : Mohammad Aslam Bin Azman
 * Date : 9 January 2025
*/


#include "Customer.h"
#include <iostream>
#include <fstream>

using namespace std;

void Customer::registerCustomer() {
    cout << "Enter your name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter your phone number: ";
    cin >> phone;

    ofstream file("customers.txt", ios::app);
    if (file.is_open()) {
        file << name << "," << phone << endl;
        file.close();
        cout << endl << endl;
        cout << "Customer registered successfully!\n";
        cout << endl << endl;
    } else {
        cout << "Error: Unable to open file.\n";
    }
}

ostream& operator<<(ostream& os, const Customer& customer) {
    os << customer.name << "," << customer.phone;
    return os;
}

ofstream& operator<<(ofstream& os, const Customer& customer) {
    os << customer.name << "," << customer.phone;
    return os;
}