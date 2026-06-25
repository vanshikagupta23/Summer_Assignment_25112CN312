#include <bits/stdc++.h>
using namespace std;


int main(){
    string line; cout << "Enter a sentence: "; getline(cin, line);
    stringstream ss(line); string word, longest="";
    while (ss >> word) if (word.length() > longest.length()) longest = word;
    cout << "Longest word: " << longest << endl;
    return 0;
}
