#include <bits/stdc++.h>
using namespace std;


struct Contact{ string name, phone;};
int main(){ vector<Contact> c; int ch; while(true){ cout<<"\n1.Add 2.Display 3.Search 4.Exit: "; cin>>ch; if(ch==1){ Contact x; cout<<"Name Phone: "; cin>>x.name>>x.phone; c.push_back(x);} else if(ch==2){ for(auto &x:c) cout<<x.name<<" "<<x.phone<<endl;} else if(ch==3){ string key; cout<<"Name: "; cin>>key; for(auto &x:c) if(x.name==key) cout<<x.phone<<endl;} else break;} return 0; }
