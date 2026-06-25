#include <bits/stdc++.h>
using namespace std;


int main(){ int n; cout<<"Enter number of names: "; cin>>n; cin.ignore(); vector<string> names(n); for(string &s:names) getline(cin,s); sort(names.begin(), names.end()); cout<<"Sorted names:\n"; for(string &s:names) cout<<s<<endl; return 0; }
