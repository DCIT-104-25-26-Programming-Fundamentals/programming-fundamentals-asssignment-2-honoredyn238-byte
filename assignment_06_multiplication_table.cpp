#include <iostream>
using namespace std;

// function prototypes
void singleTable(int num);
void rangeTable(int start, int end);

int main() {
    int choice;
    int num, start, end;

    cout << "Multiplication Table Generator" << endl;
    cout << "1. Single Table" << endl;
    cout << "2. Table for a Range" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        // PART A
        cout << "Enter a number: ";
        cin >> num;
        singleTable(num);
    }
    else if (choice == 2) {
        // PART B
        cout << "Enter start number: ";
        cin >> start;
        cout << "Enter end number: ";
        cin >> end;
        rangeTable(start, end);
    }
    else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}

// PART A: Print multiplication table for one number
void singleTable(int num) {
    cout << "\nMultiplication Table for " << num << ":" << endl;
    
    for (int i = 1; i <= 10; i++) {
        int result = num * i;
        cout << num << " x " << i << " = " << result << endl;
    }
}

// PART B: Print tables for a range of numbers
void rangeTable(int start, int end) {
    for (int n = start; n <= end; n++) {
        cout << "\nMultiplication Table for " << n << ":" << endl;
        for (int i = 1; i <= 10; i++) {
            cout << n << " x " << i << " = " << n * i << endl;
        }
    }
}
