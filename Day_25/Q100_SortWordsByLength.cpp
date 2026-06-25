#include <bits/stdc++.h>
using namespace std;


int main(){ string line; cout<<"Enter sentence: "; getline(cin,line); stringstream ss(line); vector<string> words; string w; while(ss>>w) words.push_back(w); stable_sort(words.begin(), words.end(), [](const string&a,const string&b){return a.size()<b.size();}); cout<<"Words sorted by length: "; for(string &x:words) cout<<x<<" "; cout<<endl; return 0; }
