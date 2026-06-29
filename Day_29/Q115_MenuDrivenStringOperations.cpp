#include <bits/stdc++.h>
using namespace std;


int main(){ 
    string s; 
    cout<<"Enter string: "; 
    getline(cin,s);
     int ch; 
     while(true)
     { cout<<"\n1.Length 2.Reverse 3.Uppercase 4.Exit: "; 
        cin>>ch; 
        if(ch==1)
         cout<<s.length()<<endl;
         else if(ch==2)
         { string t=s; 
            reverse(t.begin(),t.end()); cout<<t<<endl;}
             else if(ch==3)
             { string t=s;
                 for(char &c:t) 
                 c=toupper(c);
                 cout<<t<<endl;}
                  else break;}
                   return 0; 
                }
