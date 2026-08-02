#include <iostream>
using namespace std;

int main() {
    // declare variables
    int n;
    int arr[100]; // big enough array
    int sum = 0;
    int max, min;
    float avg;

    cout << "How many numbers? ";
    cin >> n;

    // input numbers into array
    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
        sum = sum + arr[i]; // add to sum
    }

    // set first element as max and min
    max = arr[0];
    min = arr[0];

    // find max and min
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // calculate average
    avg = (float)sum / n;

    // print results
    cout << "\nResults:" << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;
    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;

    return 0;
}
