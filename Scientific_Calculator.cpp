#include <bits/stdc++.h>
#include <cmath>
using namespace std;

// Define M_PI if not already defined
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

void displayMenu() {
    cout << "\n\t-----------------------------------------------------------------------------\n";
    cout << "\t                              CALCULATOR                                        \n";
    cout << "\n\t-----------------------------------------------------------------------------\n";
    cout << "\t1: Addition\t\t" << "9: sin" << endl;
    cout << "\t2: Subtraction\t\t" << "10: cos" << endl;
    cout << "\t3: Multiplication\t" << "11: tan" << endl;
    cout << "\t4: Division\t\t" << "12: Inverse of sin" << endl;
    cout << "\t5: Exponent\t\t" << "13: Inverse of cos" << endl;
    cout << "\t6: Square\t\t" << "14: Inverse of tan" << endl;
    cout << "\t7: log\t\t\t" << "15: Exit" << endl;
    cout << "\t8: Square Root\t";
}

int main() {
    while (true) {
        displayMenu();
        int choice;
        double num1, num2;
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 15) {
            cout << "Exiting...\n";
            break;
        }

        if (choice >= 1 && choice <= 8) {
            cout << "Enter first number: ";
            cin >> num1;
        }

        switch (choice) {
            case 1:
                cout << "Enter second number: ";
                cin >> num2;
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Enter second number: ";
                cin >> num2;
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Enter second number: ";
                cin >> num2;
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4:
                cout << "Enter second number: ";
                cin >> num2;
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero" << endl;
                break;
            case 5:
                cout << "Enter exponent value: ";
                cin >> num2;
                cout << "Result: " << pow(num1, num2) << endl;
                break;
            case 6:
                cout << "Result: " << num1 * num1 << endl;
                break;
            case 7:
                if (num1 > 0)
                    cout << "Result: " << log(num1) << endl;
                else
                    cout << "Error: log is not defined for non-positive values" << endl;
                break;
            case 8:
                if (num1 >= 0)
                    cout << "Result: " << sqrt(num1) << endl;
                else
                    cout << "Error: Square root of negative number is not defined" << endl;
                break;
            case 9:
                cout << "Enter angle in degrees: ";
                cin >> num1;
                cout << "Result: " << sin(num1 * M_PI / 180.0) << endl;
                break;
            case 10:
                cout << "Enter angle in degrees: ";
                cin >> num1;
                cout << "Result: " << cos(num1 * M_PI / 180.0) << endl;
                break;
            case 11:
                cout << "Enter angle in degrees: ";
                cin >> num1;
                cout << "Result: " << tan(num1 * M_PI / 180.0) << endl;
                break;
            case 12:
                cout << "Enter value: ";
                cin >> num1;
                if (num1 >= -1 && num1 <= 1)
                    cout << "Result: " << asin(num1) * 180.0 / M_PI << endl;
                else
                    cout << "Error: Value out of range for asin" << endl;
                break;
            case 13:
                cout << "Enter value: ";
                cin >> num1;
                if (num1 >= -1 && num1 <= 1)
                    cout << "Result: " << acos(num1) * 180.0 / M_PI << endl;
                else
                    cout << "Error: Value out of range for acos" << endl;
                break;
            case 14:
                cout << "Enter value: ";
                cin >> num1;
                cout << "Result: " << atan(num1) * 180.0 / M_PI << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    
    return 0;
}
