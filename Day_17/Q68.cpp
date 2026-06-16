// C++ program to find common elements in two arrays

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

    bool found = false;

    // Find common elements
    cout << "Common elements are: ";
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                found = true;
                break;
            }
        }
    }

    // If no common element exists
    if (!found) {
        cout << "No common elements found.";
    }

    cout << endl;

    return 0;
}
