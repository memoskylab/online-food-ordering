
/*
 * Purpose : Get The Feedback
 * Author : Mohammad Aslam Bin Azman
 * Date : 9 January 2025
*/

#include "Feedback.h"
#include <iostream>
#include <fstream>

using namespace std;

void Feedback::insertFeedback() {
    string feedbackText;
    cout << endl << endl;
    cout << "Enter your feedback: ";
    cin.ignore();
    getline(cin, feedbackText);

    ofstream file("feedback.txt", ios::app);
    if (file.is_open()) {
        file << feedbackText << endl;
        file.close();
        cout << "Feedback submitted successfully!\n";
        cout << endl << endl;
    } else {
        cout << "Error: Unable to open feedback file.\n";
        cout << endl << endl;
    }
}

void Feedback::displayFeedback() {
    ifstream file("feedback.txt");
    string line;

    if (file.is_open()) {
        cout << endl << endl;
        cout << "Customer Feedback:\n";
        while (getline(file, line)) {
            cout << line << endl;
        }
        cout << endl << endl;
        file.close();
    } else {
        cout << "Error: Unable to open feedback file.\n";
    }
}