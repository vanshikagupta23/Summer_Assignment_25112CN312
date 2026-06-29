#include <bits/stdc++.h>
using namespace std;


struct Item{int id, qty; string name; double price;};
int main(){ 
    vector<Item> inv;
     int ch;
      while(true)
      { cout<<"\n1.Add 2.Display 3.Exit: "; 
        cin>>ch; 
        if(ch==1)
        {Item x;
             cout<<"Id Name Qty Price: ";
              cin>>x.id>>x.name>>x.qty>>x.price;
               inv.push_back(x);}
                else if(ch==2)
                {for(auto &x:inv) 
                    cout<<x.id<<" "<<x.name<<" "<<x.qty<<" "<<x.price<<endl;}
                     else break;}
                      return 0;
                     }
