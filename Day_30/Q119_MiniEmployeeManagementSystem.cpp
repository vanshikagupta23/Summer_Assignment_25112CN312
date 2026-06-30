#include <bits/stdc++.h>
using namespace std;


struct Emp{int id; string name; double salary;};
int main(){
     vector<Emp> emp;
      int ch;
       while(true)
       { cout<<"\n1.Add 2.Search 3.Display 4.Exit: ";
         cin>>ch; 
         if(ch==1)
         {Emp e;
             cout<<"Id Name Salary: ";
              cin>>e.id>>e.name>>e.salary;
               emp.push_back(e);}
                else if(ch==2)
                {int id;
                     cin>>id;
                      for(auto &e:emp)
                       if(e.id==id)
                        cout<<e.name<<" "<<e.salary<<endl;}
                     else if(ch==3)
                     {for(auto &e:emp)
                         cout<<e.id<<" "<<e.name<<" "<<e.salary<<endl;}
                          else break;} 
                          return 0;
                         }
