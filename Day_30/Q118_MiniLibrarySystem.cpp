#include <bits/stdc++.h>
using namespace std;


struct Book{string title; bool issued=false;};
int main(){
     vector<Book> books; 
     int ch;
      while(true)
      { cout<<"\n1.Add 2.Issue 3.Return 4.Show 5.Exit: ";
         cin>>ch;
          cin.ignore();
           if(ch==1)
           {Book b;
             cout<<"Title: "; 
             getline(cin,b.title);
              books.push_back(b);} 
              else if(ch==2)
              {int i;
                 cin>>i;
                  if(i>=0&&i<books.size())
                   books[i].issued=true;}
                 else if(ch==3)
                 {int i;
                cin>>i; 
                if(i>=0&&i<books.size())
                 books[i].issued=false;}
                 else if(ch==4)
                 {for(int i=0;i<books.size();i++) 
                    cout<<i<<" "<<books[i].title<<" "<<(books[i].issued?"Issued":"Available")<<endl;}
                     else break;}
                      return 0;
                     }
