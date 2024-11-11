#include <iostream>
using namespace std;

int fun(int arr[], int n, int i, int key) {
    if (i == n) {
        return -1; // Key not found in the array
    }
    if (arr[i] == key) {
        return i; // Key found at index i
    }
    return fun(arr, n, i + 1, key); // Recursive call to check next element
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int e = 0; e < n; e++) {
        cin >> arr[e];
    }

    int key;
    cout << "Enter the key to search for: ";
    cin >> key;

    int result = fun(arr, n, 0, key); // Start the search from index 0
    if (result != -1) {
        cout << "Key " << key << " found at index " << result << "." << endl;
    } else {
        cout << "Key " << key << " not found in the array." << endl;
    }

    return 0;
}
