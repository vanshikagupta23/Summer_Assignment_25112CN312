#include <bits/stdc++.h>
using namespace std;


struct Employee{int id; string name; double salary;};
int main(){ vector<Employee> e; int ch; while(true){ cout<<"\n1.Add 2.Display 3.Exit: "; cin>>ch; if(ch==1){ Employee x; cout<<"Id Name Salary: "; cin>>x.id>>x.name>>x.salary; e.push_back(x);} else if(ch==2){ for(auto &x:e) cout<<x.id<<" "<<x.name<<" "<<x.salary<<endl;} else break;} return 0; }
