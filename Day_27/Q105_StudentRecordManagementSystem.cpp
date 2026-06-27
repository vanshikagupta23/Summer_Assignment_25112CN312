#include <bits/stdc++.h>
using namespace std;


struct Student{int roll; string name; double marks;};
int main(){ vector<Student> s; int ch; while(true){ cout<<"\n1.Add 2.Display 3.Exit: "; cin>>ch; if(ch==1){ Student x; cout<<"Roll Name Marks: "; cin>>x.roll>>x.name>>x.marks; s.push_back(x);} else if(ch==2){ for(auto &x:s) cout<<x.roll<<" "<<x.name<<" "<<x.marks<<endl;} else break;} return 0; }
