/*
 * Purpose : Show Menu
 * Author : Mohammad Aslam Bin Azman
 * Date : 9 January 2025
*/

#ifndef MENU_H
#define MENU_H

#include <string>
using namespace std;

class Menu {
public:
    static const int MENU_SIZE = 3; // Update to match your menu size
    static string menuItems[MENU_SIZE];
    static double menuPrices[MENU_SIZE];

    void displayMenu();
};

#endif
