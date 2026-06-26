#include <bits/stdc++.h>
using namespace std;


int main(){ double balance=10000; int ch; while(true){ cout<<"\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoose option: "; cin>>ch; if(ch==1) cout<<"Balance: "<<balance<<endl; else if(ch==2){ double amt; cout<<"Enter amount: "; cin>>amt; balance+=amt; cout<<"Deposited successfully.\n";} else if(ch==3){ double amt; cout<<"Enter amount: "; cin>>amt; if(amt<=balance){balance-=amt; cout<<"Withdrawn successfully.\n";} else cout<<"Insufficient balance.\n";} else if(ch==4) break; else cout<<"Invalid option.\n";} return 0; }
