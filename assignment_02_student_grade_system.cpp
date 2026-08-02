#include <iostream>
using namespace std;

int main() {
    // declare variables
    int score;
    char grade;

    cout << "Enter student score: ";
    cin >> score;

    // check the grade using if else
    if (score >= 80 && score <= 100) {
        grade = 'A';
    }
    else if (score >= 70 && score <= 79) {
        grade = 'B';
    }
    else if (score >= 60 && score <= 69) {
        grade = 'C';
    }
    else if (score >= 50 && score <= 59) {
        grade = 'D';
    }
    else {
        grade = 'F';  // anything below 50
    }

    // print the result
    cout << "The grade is: " << grade << endl;

    return 0;
}
