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

    // Reverse the array using two pointers
    int start = 0;
    int end = n - 1;

    while (start < end) {
        // Swap elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    // Display reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
