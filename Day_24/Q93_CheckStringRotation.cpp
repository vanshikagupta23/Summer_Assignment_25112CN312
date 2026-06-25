#include <bits/stdc++.h>
using namespace std;


bool isRotation(string s1, string s2) {
    if (s1.length() != s2.length()) return false;
    return (s1 + s1).find(s2) != string::npos;
}
int main() {
    string s1, s2;
    cout << "Enter first string: "; getline(cin, s1);
    cout << "Enter second string: "; getline(cin, s2);
    cout << (isRotation(s1, s2) ? "Rotation" : "Not Rotation") << endl;
    return 0;
}
