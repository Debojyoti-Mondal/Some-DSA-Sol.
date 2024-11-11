#include <iostream>
using namespace std;

bool sorted(int arr[], int n) {
    if (n == 1) {
        return true;
    }
    bool restarr = sorted(arr + 1, n - 1);
    if (arr[0] < arr[1] && restarr) {
        return true;
    }
    return false; // Added this return to ensure function always returns a value
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (sorted(arr, n)) {
        cout << "The array is sorted in ascending order." << endl;
    } else {
        cout << "The array is not sorted in ascending order." << endl;
    }

    return 0;
}
