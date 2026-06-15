// C++ program to find a pair of elements with a given sum

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, target;

    // Input size of array
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    // Input array elements
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input target sum
    cout << "Enter the target sum: ";
    cin >> target;

    bool found = false;

    // Check all possible pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Pair found: (" << arr[i]
                     << ", " << arr[j] << ")" << endl;
                found = true;
            }
        }
    }

    // If no pair exists
    if (!found) {
        cout << "No pair found with the given sum." << endl;
    }

    return 0;
}
