#include <iostream>
using namespace std;

// function prototypes
void printFirstN(int n);
int findNth(int n);

int main() {
    int choice;
    int n;

    cout << "Fibonacci Sequence Generator" << endl;
    cout << "1. Print first N terms" << endl;
    cout << "2. Find Nth term" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        // PART A
        cout << "How many terms? ";
        cin >> n;
        printFirstN(n);
    }
    else if (choice == 2) {
        // PART B
        cout << "Enter term position: ";
        cin >> n;
        cout << "The " << n << "th term is: " << findNth(n) << endl;
    }
    else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}

// PART A: Print first N Fibonacci terms
void printFirstN(int n) {
    int first = 0;
    int second = 1;
    int next;

    cout << "Fibonacci sequence: ";

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            cout << first << " ";
            continue;
        }
        if (i == 2) {
            cout << second << " ";
            continue;
        }
        next = first + second;
        first = second;
        second = next;
        cout << next << " ";
    }
    cout << endl;
}

// PART B: Find Nth Fibonacci term
int findNth(int n) {
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    
    int first = 0;
    int second = 1;
    int next;
    
    for (int i = 3; i <= n; i++) {
        next = first + second;
        first = second;
        second = next;
    }
    return second;
}
