#include <bits/stdc++.h>
using namespace std;


int main(){
     double a,b;
     int ch;
      while(true)
      { cout<<"\n1.Add 2.Subtract 3.Multiply 4.Divide 5.Exit: ";
         cin>>ch; 
         if(ch==5)
          break; 
         cout<<"Enter two numbers: ";
          cin>>a>>b; 
          if(ch==1) 
          cout<<a+b;
         else if(ch==2) 
         cout<<a-b; 
        else if(ch==3)
         cout<<a*b;
         else if(ch==4)
          cout<<(b!=0?a/b:0);
         cout<<endl;} 
         return 0;
         }
