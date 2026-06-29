#include <bits/stdc++.h>
using namespace std;


int main(){
     vector<int>a; 
     int ch;
      while(true)
      { cout<<"\n1.Insert 2.Display 3.Search 4.Sort 5.Exit: ";
         cin>>ch;
          if(ch==1)
          {int x;
             cin>>x; 
             a.push_back(x);} 
             else if(ch==2)
             {for(int x:a) 
                cout<<x<<" ";
                 cout<<endl;}
                  else if(ch==3){
                    int x;
                     cin>>x;
                      cout<<(find(a.begin(),a.end(),x)!=a.end()?"Found":"Not Found")<<endl;} 
                      else if(ch==4)
                      {sort(a.begin(),a.end());
                         cout<<"Sorted\n";}
                          else break;} 
                          return 0;
                         }
