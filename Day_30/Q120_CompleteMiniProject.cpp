#include <bits/stdc++.h>
using namespace std;


struct Student{int roll; string name; double marks;};
int main(){
     vector<Student> students;
      int ch; 
      while(true)
      { cout<<"\nMini Project Menu\n1.Add Student\n2.Display Students\n3.Search Student\n4.Delete Student\n5.Exit\nChoose: "; 
        cin>>ch;
         if(ch==1)
         {Student s;
             cout<<"Roll Name Marks: "; 
             cin>>s.roll>>s.name>>s.marks;
              students.push_back(s);} 
              else if(ch==2)
              {for(auto &s:students)
                 cout<<s.roll<<" "<<s.name<<" "<<s.marks<<endl;}
                  else if(ch==3)
                  {int r;
                    cout<<"Roll: ";
                     cin>>r; 
                     bool found=false; 
                     for(auto &s:students) 
                     if(s.roll==r)
                     {cout<<s.name<<" "<<s.marks<<endl; found=true;} 
                     if(!found) 
                     cout<<"Not found\n";}
                     else if(ch==4)
                     {int r; 
                        cout<<"Roll: "; 
                        cin>>r;
                         students.erase(remove_if(students.begin(),students.end(),[&](Student&s){return s.roll==r;
                        }),students.end());
                         cout<<"Deleted if present\n";}
                          else if(ch==5) break;
                           else 
                           cout<<"Invalid choice\n";}
                            return 0; }
