/*
 * Purpose : Show Menu
 * Author : Mohammad Aslam Bin Azman
 * Date : 9 January 2025
*/

#include "Menu.h"
#include <iostream>

string Menu::menuItems[Menu::MENU_SIZE] = {"Burger", "Pizza", "Sushi"};
double Menu::menuPrices[Menu::MENU_SIZE] = {5.99, 8.99, 12.99};

void Menu::displayMenu() {
    cout << "=========================================" << endl;
    cout << " BabyPanda Menu" << endl;
    cout << "=========================================" << endl;
    for (int i = 0; i < MENU_SIZE; i++) {
        cout << i + 1 << ". " << menuItems[i] << " - $" << menuPrices[i] << endl;
    }
    cout << "=========================================" << endl;
}
