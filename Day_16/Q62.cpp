// C++ program to find the element with maximum frequency in an array

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

    int maxFreq = 0;
    int maxElement = arr[0];

    // Find frequency of each element
    for (int i = 0; i < n; i++) {
        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // Update maximum frequency and element
        if (count > maxFreq) {
            maxFreq = count;
            maxElement = arr[i];
        }
    }

    cout << "Element with maximum frequency: " << maxElement << endl;
    cout << "Frequency: " << maxFreq << endl;

    return 0;
}
