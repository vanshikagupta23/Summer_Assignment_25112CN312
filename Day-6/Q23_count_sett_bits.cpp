#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int count = 0;

    while (n > 0) {
        count += n % 2;  // Add 1 if the last bit is set
        n /= 2;
    }

    cout << "Number of set bits = " << count << endl;

    return 0;
}
