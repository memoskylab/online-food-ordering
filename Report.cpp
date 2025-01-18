
/*
 * Purpose : Generate Reporting
 * Author : Mohammad Aslam Bin Azman
 * Date : 9 January 2025
*/


#include "Report.h"
#include <iostream>
#include <fstream>

using namespace std;

void Report::generateReport() {
    ifstream file("orders.txt");
    string line;

    cout << endl << endl;
    cout << "==========================\n";
    cout << " BabyPanda System Report\n";
    cout << "==========================\n";

    if (file.is_open()) {
        while (getline(file, line)) {
            // Parse the line: expected format "name,phone,items,total"
            size_t firstComma = line.find(',');
            size_t secondComma = line.find(',', firstComma + 1);
            size_t thirdComma = line.find(',', secondComma + 1);

            if (firstComma != string::npos && secondComma != string::npos && thirdComma != string::npos) {
                string name = line.substr(0, firstComma);
                string phone = line.substr(firstComma + 1, secondComma - firstComma - 1);
                string items = line.substr(secondComma + 1, thirdComma - secondComma - 1);
                string total = line.substr(thirdComma + 1);

                cout << "Name : " << name << endl;
                cout << "Phone Number : " << phone << endl;
                cout << "Order Item : " << items << endl;
                cout << "Total Amount Item : " << total << endl;
                cout << endl;
            } else {
                cout << "Error: Invalid data format in orders.txt.\n";
            }
        }
        file.close();
    } else {
        cout << "Error: Unable to open orders file.\n";
    }
}