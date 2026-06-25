#include <bits/stdc++.h>
using namespace std;


int main(){
    string s, ans=""; cout<<"Enter string: "; getline(cin,s);
    vector<bool> seen(256,false);
    for(char ch:s){ unsigned char c=ch; if(!seen[c]){ ans+=ch; seen[c]=true; } }
    cout << "After removing duplicates: " << ans << endl;
    return 0;
}
