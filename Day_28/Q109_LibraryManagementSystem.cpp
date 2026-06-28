#include <bits/stdc++.h>
using namespace std;


int main(){ vector<string> books; int ch; while(true){ cout<<"\n1.Add Book 2.Show Books 3.Exit: "; cin>>ch; cin.ignore(); if(ch==1){ string b; cout<<"Book name: "; getline(cin,b); books.push_back(b);} else if(ch==2){ for(string &b:books) cout<<b<<endl;} else break;} return 0; }
