#include <iostream>
#include <string>
using namespace std;

// define struct for student
struct Student {
    string name;
    int id;
    int scores[10]; // max 10 scores
    int numScores;
    float average;
};

Student students[100]; // array of students
int studentCount = 0;

// function prototypes
void addStudent();
void viewStudents();
void findStudent();
void calcAverage(Student &s);

int main() {
    int choice;

    do {
        cout << "\n===== STUDENT RECORD SYSTEM =====" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View All Students" << endl;
        cout << "3. Find Student by ID" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore(); // clear buffer

        if (choice == 1) {
            addStudent();
        }
        else if (choice == 2) {
            viewStudents();
        }
        else if (choice == 3) {
            findStudent();
        }
        else if (choice == 4) {
            cout << "Exiting program." << endl;
        }
        else {
            cout << "Invalid choice" << endl;
        }

    } while (choice!= 4);

    return 0;
}

// calculate average for one student
void calcAverage(Student &s) {
    int sum = 0;
    for (int i = 0; i < s.numScores; i++) {
        sum = sum + s.scores[i];
    }
    s.average = (float)sum / s.numScores;
}

// PART 1: Add a student
void addStudent() {
    if (studentCount >= 100) {
        cout << "Database full!" << endl;
        return;
    }

    Student s;
    cout << "Enter student name: ";
    getline(cin, s.name);

    cout << "Enter student ID: ";
    cin >> s.id;

    cout << "How many scores? ";
    cin >> s.numScores;

    cout << "Enter " << s.numScores << " scores:" << endl;
    for (int i = 0; i < s.numScores; i++) {
        cin >> s.scores[i];
    }

    calcAverage(s); // calculate average

    students[studentCount] = s;
    studentCount++;

    cout << "Student added successfully!" << endl;
}

// PART 2: View all students
void viewStudents() {
    if (studentCount == 0) {
        cout << "No students in record." << endl;
        return;
    }

    for (int i = 0; i < studentCount; i++) {
        cout << "\n--- Student " << i + 1 << " ---" << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "ID: " << students[i].id << endl;
        cout << "Scores: ";
        for (int j = 0; j < students[i].numScores; j++) {
            cout << students[i].scores[j] << " ";
        }
        cout << endl;
        cout << "Average: " << students[i].average << endl;
    }
}

// PART 3: Find student by ID
void findStudent() {
    if (studentCount == 0) {
        cout << "No students in record." << endl;
        return;
    }

    int searchId;
    cout << "Enter student ID to search: ";
    cin >> searchId;

    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == searchId) {
            cout << "\nStudent Found!" << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "ID: " << students[i].id << endl;
            cout << "Average: " << students[i].average << endl;
            return;
        }
    }
    cout << "Student not found." << endl;
}
