/*
 * Purpose : Taking Order
 * Author : Mohammad Aslam Bin Azman
 * Date : 9 January 2025
*/

#include "Order.h"
#include "Menu.h"
#include <iostream>
#include <fstream>

using namespace std;

void Order::placeOrder(Customer &customer) {
    int itemIndex, quantity;
    string itemName;
    double itemPrice, total = 0;

    cout << "Enter the item index to order (1 to " << Menu::MENU_SIZE << "): ";
    cin >> itemIndex;

    if (itemIndex < 1 || itemIndex > Menu::MENU_SIZE) {
        cout << "Invalid item index. Please try again.\n";
        return;
    }

    itemName = Menu::menuItems[itemIndex - 1];
    itemPrice = Menu::menuPrices[itemIndex - 1];

    cout << "Enter the quantity: ";
    cin >> quantity;

    total = itemPrice * quantity;

    ofstream file("orders.txt", ios::app);
    if (file.is_open()) {
        file << customer.getName() << "," << customer.getPhone() << "," << itemName << "," << total << endl;
        file.close();
        cout << "Order placed successfully!\n";
    } else {
        cout << "Error: Unable to open file.\n";
    }
}
