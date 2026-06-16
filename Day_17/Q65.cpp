// C++ program to merge two arrays

#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    // Input size of first array
    cout << "Enter the size of first array: ";
    cin >> n1;

    int arr1[n1];

    // Input elements of first array
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    // Input size of second array
    cout << "Enter the size of second array: ";
    cin >> n2;

    int arr2[n2];

    // Input elements of second array
    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    // Create merged array
    int merged[n1 + n2];

    // Copy first array elements
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy second array elements
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    // Display merged array
    cout << "Merged array: ";
    for (int i = 0; i < n1 + n2; i++) {
        cout << merged[i] << " ";
    }

    cout << endl;

    return 0;
}
