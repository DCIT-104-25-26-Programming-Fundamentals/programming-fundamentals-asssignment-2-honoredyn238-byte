#include <iostream>
#include <string>
using namespace std;

// global variables - very beginner style
string tasks[100];
bool status[100]; // false = not done, true = done
int taskCount = 0;

// function prototypes
void addTask();
void viewTasks();
void deleteTask();
void markDone();

int main() {
    int choice;

    do {
        // menu
        cout << "\n===== TO-DO LIST =====" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View All Tasks" << endl;
        cout << "3. Mark Task as Done" << endl;
        cout << "4. Delete Task" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore(); // clear buffer for getline

        if (choice == 1) {
            addTask();
        }
        else if (choice == 2) {
            viewTasks();
        }
        else if (choice == 3) {
            markDone();
        }
        else if (choice == 4) {
            deleteTask();
        }
        else if (choice == 5) {
            cout << "Goodbye!" << endl;
        }
        else {
            cout << "Invalid choice" << endl;
        }

    } while (choice!= 5);

    return 0;
}

// PART 1: Add a task
void addTask() {
    if (taskCount >= 100) {
        cout << "Task list is full!" << endl;
        return;
    }

    string task;
    cout << "Enter task description: ";
    getline(cin, task);

    tasks[taskCount] = task;
    status[taskCount] = false; // not done yet
    taskCount++;

    cout << "Task added successfully!" << endl;
}

// PART 2: View all tasks
void viewTasks() {
    if (taskCount == 0) {
        cout << "No tasks in the list." << endl;
        return;
    }

    cout << "\n--- Your Tasks ---" << endl;
    for (int i = 0; i < taskCount; i++) {
        cout << i + 1 << ". " << tasks[i];
        if (status[i] == true) {
            cout << " [DONE]" << endl;
        } else {
            cout << " [PENDING]" << endl;
        }
    }
}

// PART 3: Mark task as done
void markDone() {
    if (taskCount == 0) {
        cout << "No tasks to mark." << endl;
        return;
    }

    viewTasks();
    int num;
    cout << "Enter task number to mark as done: ";
    cin >> num;

    if (num >= 1 && num <= taskCount) {
        status[num - 1] = true;
        cout << "Task marked as done!" << endl;
    } else {
        cout << "Invalid task number" << endl;
    }
}

// PART 4: Delete task
void deleteTask() {
    if (taskCount == 0) {
        cout << "No tasks to delete." << endl;
        return;
    }

    viewTasks();
    int num;
    cout << "Enter task number to delete: ";
    cin >> num;

    if (num >= 1 && num <= taskCount) {
        // shift tasks down
        for (int i = num - 1; i < taskCount - 1; i++) {
            tasks[i] = tasks[i + 1];
            status[i] = status[i + 1];
        }
        taskCount--;
        cout << "Task deleted!" << endl;
    } else {
        cout << "Invalid task number" << endl;
    }
}
