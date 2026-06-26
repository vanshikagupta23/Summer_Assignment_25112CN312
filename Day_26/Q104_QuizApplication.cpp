#include <bits/stdc++.h>
using namespace std;


int main(){ vector<string> q={"Capital of India?","2 + 2 = ?","C++ is developed by?"}; vector<string> ans={"Delhi","4","Bjarne Stroustrup"}; int score=0; cin.ignore(0); for(int i=0;i<q.size();i++){ string user; cout<<q[i]<<" "; getline(cin,user); if(user==ans[i]) score++; } cout<<"Score: "<<score<<"/"<<q.size()<<endl; return 0; }
