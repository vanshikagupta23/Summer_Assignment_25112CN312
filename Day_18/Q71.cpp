// C++ Program for Binary Search

#include <iostream>
using namespace std;

int main() {
    int n, key;

    // Input size of array
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Input sorted array elements
    cout << "Enter the elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input element to search
    cout << "Enter the element to search: ";
    cin >> key;

    int low = 0, high = n - 1;
    int found = -1;

    // Binary Search
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            found = mid;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    // Display result
    if (found != -1)
        cout << "Element found at index " << found;
    else
        cout << "Element not found";

    return 0;
}
