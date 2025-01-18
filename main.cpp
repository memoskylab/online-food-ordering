/*
 * Purpose : Execute Files
 * Author : Mohammad Aslam Bin Azman
 * Date : 9 January 2025
*/

// File: main.cpp
#include <iostream>
#include "Customer.h"
#include "Menu.h"
#include "Order.h"
#include "Feedback.h"
#include "Report.h"

using namespace std;

int main() {
    Customer customer;
    Menu menu;
    Order order;
    Feedback feedback;
    Report report;

    int choice;
    do {
        cout << "=========================================" << endl;
        cout << " Welcome to BabyPanda Online Food Ordering" << endl;
        cout << "=========================================" << endl;
        cout << "1. Register/Login\n2. View Menu\n3. Place an Order\n4. Insert Feedback\n5. View Feedback\n6. Generate Report\n7. Exit\n";
        cout << endl;
        cout << "Please enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                customer.registerCustomer();
            break;
            case 2:
                menu.displayMenu();
            break;
            case 3:
                order.placeOrder(customer);
            break;
            case 4:
                feedback.insertFeedback();
            break;
            case 5:
                feedback.displayFeedback();
            break;
            case 6:
                report.generateReport();
            break;
            case 7:
                cout << endl;
                cout << "Thank you for using BabyPanda. Goodbye!\n";
            break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 7);

    return 0;
}