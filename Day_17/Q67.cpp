// C++ program to find the Intersection of two arrays
// Intersection contains common elements present in both arrays

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

    vector<int> intersection;

    // Find common elements
    for (int i = 0; i < n1; i++) {
        bool foundInSecond = false;
        bool alreadyAdded = false;

        // Check if element exists in second array
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                foundInSecond = true;
                break;
            }
        }

        // Check if already added to intersection
        for (int k = 0; k < intersection.size(); k++) {
            if (arr1[i] == intersection[k]) {
                alreadyAdded = true;
                break;
            }
        }

        // Add element if common and not already added
        if (foundInSecond && !alreadyAdded) {
            intersection.push_back(arr1[i]);
        }
    }

    // Display intersection array
    cout << "Intersection of arrays: ";
    for (int i = 0; i < intersection.size(); i++) {
        cout << intersection[i] << " ";
    }

    cout << endl;

    return 0;
}
