// C++ program to find the Union of two arrays
// Union contains all unique elements from both arrays

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, n2;

    // Input size of first array
    cout << "Enter size of first array: ";
    cin >> n1;

    vector<int> arr1(n1);

    // Input elements of first array
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    // Input size of second array
    cout << "Enter size of second array: ";
    cin >> n2;

    vector<int> arr2(n2);

    // Input elements of second array
    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    vector<int> unionArray;

    // Add unique elements from first array
    for (int i = 0; i < n1; i++) {
        bool found = false;

        for (int j = 0; j < unionArray.size(); j++) {
            if (arr1[i] == unionArray[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            unionArray.push_back(arr1[i]);
        }
    }

    // Add unique elements from second array
    for (int i = 0; i < n2; i++) {
        bool found = false;

        for (int j = 0; j < unionArray.size(); j++) {
            if (arr2[i] == unionArray[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            unionArray.push_back(arr2[i]);
        }
    }

    // Display union array
    cout << "Union of arrays: ";
    for (int i = 0; i < unionArray.size(); i++) {
        cout << unionArray[i] << " ";
    }

    cout << endl;

    return 0;
}
