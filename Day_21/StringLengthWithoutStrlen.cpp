// Program to find string length without using strlen()

#include <iostream>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int count = 0;

    for (char ch : str) {
        count++;
    }

    cout << "Length of string = " << count << endl;

    return 0;
}
