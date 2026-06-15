// C++ program to find the missing number in an array
// The array contains numbers from 1 to n with one number missing

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    // Input the value of n
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> arr(n - 1);

    // Input array elements
    cout << "Enter " << n - 1 << " elements: ";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    // Calculate expected sum of numbers from 1 to n
    int totalSum = n * (n + 1) / 2;

    // Calculate actual sum of array elements
    int arraySum = 0;
    for (int i = 0; i < n - 1; i++) {
        arraySum += arr[i];
    }

    // Missing number
    int missingNumber = totalSum - arraySum;

    cout << "Missing number is: " << missingNumber << endl;

    return 0;
}
