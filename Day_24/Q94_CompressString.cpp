#include <bits/stdc++.h>
using namespace std;


string compressString(string s) {
    string ans = "";
    for (int i = 0; i < (int)s.size(); ) {
        char ch = s[i]; int count = 0;
        while (i < (int)s.size() && s[i] == ch) { count++; i++; }
        ans += ch + to_string(count);
    }
    return ans;
}
int main(){ string s; cout<<"Enter string: "; getline(cin,s); cout<<compressString(s)<<endl; return 0; }
