#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    unordered_set<char> seen;

    for (char ch : str) {
        if (seen.count(ch)) {
            cout << "First repeating character: " << ch << endl;
            return 0;
        }
        seen.insert(ch);
    }

    cout << "No repeating character found." << endl;
    return 0;
}