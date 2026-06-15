// C++ program to remove duplicates from an array

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    // Input size of array
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    // Input array elements
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result;

    // Store only unique elements
    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

        for (int j = 0; j < result.size(); j++) {
            if (arr[i] == result[j]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            result.push_back(arr[i]);
        }
    }

    // Display array after removing duplicates
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    cout << endl;
    return 0;
}
