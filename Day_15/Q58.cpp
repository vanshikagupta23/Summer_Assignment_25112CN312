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

    // Store first element
    int first = arr[0];

    // Shift all elements one position to the left
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Place first element at the end
    arr[n - 1] = first;

    // Display rotated array
    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
