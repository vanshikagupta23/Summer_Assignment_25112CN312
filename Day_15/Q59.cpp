#include <iostream>
using namespace std;

int main() {
    int n;

    // Input size of array
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Store last element
    int last = arr[n - 1];

    // Shift all elements one position to the right
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Place last element at the beginning
    arr[0] = last;

    // Display rotated array
    cout << "Array after right rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
