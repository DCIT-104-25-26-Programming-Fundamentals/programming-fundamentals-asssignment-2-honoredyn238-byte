#include <iostream>
using namespace std;

// function prototypes
void transpose(int matrix[10][10], int rows, int cols);
void addMatrix(int a[10][10], int b[10][10], int rows, int cols);
void multiplyMatrix(int a[10][10], int b[10][10], int r1, int c1, int r2, int c2);

int main() {
    int choice;
    int mat1[10][10], mat2[10][10];
    int r1, c1, r2, c2;

    cout << "Matrix Operations Menu" << endl;
    cout << "1. Transpose" << endl;
    cout << "2. Add" << endl;
    cout << "3. Multiply" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        // Transpose
        cout << "Enter rows and columns: ";
        cin >> r1 >> c1;

        cout << "Enter matrix elements:" << endl;
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                cin >> mat1[i][j];
            }
        }
        transpose(mat1, r1, c1);
    }
    else if (choice == 2) {
        // Add
        cout << "Enter rows and columns: ";
        cin >> r1 >> c1;
        r2 = r1; c2 = c1; // must be same size

        cout << "Enter first matrix:" << endl;
        for (int i = 0; i < r1; i++)
            for (int j = 0; j < c1; j++)
                cin >> mat1[i][j];

        cout << "Enter second matrix:" << endl;
        for (int i = 0; i < r2; i++)
            for (int j = 0; j < c2; j++)
                cin >> mat2[i][j];

        addMatrix(mat1, mat2, r1, c1);
    }
    else if (choice == 3) {
        // Multiply
        cout << "Enter rows and columns of first matrix: ";
        cin >> r1 >> c1;
        cout << "Enter rows and columns of second matrix: ";
        cin >> r2 >> c2;

        cout << "Enter first matrix:" << endl;
        for (int i = 0; i < r1; i++)
            for (int j = 0; j < c1; j++)
                cin >> mat1[i][j];

        cout << "Enter second matrix:" << endl;
        for (int i = 0; i < r2; i++)
            for (int j = 0; j < c2; j++)
                cin >> mat2[i][j];

        multiplyMatrix(mat1, mat2, r1, c1, r2, c2);
    }
    else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}

// PART A: Transpose function
void transpose(int matrix[10][10], int rows, int cols) {
    int trans[10][10];

    // compute transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            trans[j][i] = matrix[i][j];
        }
    }

    // print original
    cout << "\nOriginal Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // print transpose
    cout << "\nTransposed Matrix:" << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }
}

// PART B: Add matrices
void addMatrix(int a[10][10], int b[10][10], int rows, int cols) {
    int sum[10][10];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "\nResult after addition:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
}

// PART C: Multiply matrices
void multiplyMatrix(int a[10][10], int b[10][10], int r1, int c1, int r2, int c2
