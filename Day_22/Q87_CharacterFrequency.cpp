// Q87: Character Frequency
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    unordered_map<char, int> freq;
    for (char ch : str) freq[ch]++;

    cout << "Character Frequencies:\n";
    for (auto p : freq)
        cout << p.first << " : " << p.second << endl;

    return 0;
}