/*
 * Purpose : Taking Order
 * Author : Mohammad Aslam Bin Azman
 * Date : 9 January 2025
*/

#include "Order.h"
#include <iostream>
#include <fstream>

using namespace std;

void Order::placeOrder(Customer &customer) {
    string items;
    double total;
    cout << "Enter items you want to order: ";
    cin.ignore();
    getline(cin, items);
    cout << "How many items you want to order: ";
    cin >> total;

    ofstream file("orders.txt", ios::app);
    if (file.is_open()) {
        file << customer << "," << items << "," << total << endl;
        file.close();
        cout << endl << endl;
        cout << "Order placed successfully!\n";
        cout << endl << endl;
    } else {
        cout << endl << endl;
        cout << "Error: Unable to open file.\n";
        cout << endl << endl;
    }
}