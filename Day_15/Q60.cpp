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

    // Position to place the next non-zero element
    int index = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index] = arr[i];
            index++;
        }
    }

    // Fill remaining positions with zeroes
    while (index < n) {
        arr[index] = 0;
        index++;
    }

    // Display updated array
    cout << "Array after moving zeroes to the end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
