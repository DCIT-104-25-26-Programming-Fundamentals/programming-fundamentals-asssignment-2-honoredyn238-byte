#include <iostream>
#include <cmath> // for pow()
using namespace std;

// function prototypes
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
int modulus(int a, int b);
double power(double a, double b);

int main() {
    int choice;
    double num1, num2, result;
    int n1, n2; // for modulus

    do {
        // menu
        cout << "\n===== SIMPLE CALCULATOR =====" << endl;
        cout << "1. Addition (+)" << endl;
        cout << "2. Subtraction (-)" << endl;
        cout << "3. Multiplication (*)" << endl;
        cout << "4. Division (/)" << endl;
        cout << "5. Modulus (%)" << endl;
        cout << "6. Exponentiation (^)" << endl;
        cout << "7. Quit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 6) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }

        if (choice == 1) {
            result = add(num1, num2);
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
        }
        else if (choice == 2) {
            result = subtract(num1, num2);
            cout << "Result: " << num1 << " - " << num2 << "
