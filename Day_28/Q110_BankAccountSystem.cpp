#include <bits/stdc++.h>
using namespace std;


class BankAccount{ double balance; public: BankAccount(double b=0):balance(b){} void deposit(double a){balance+=a;} void withdraw(double a){ if(a<=balance) balance-=a; else cout<<"Insufficient balance\n";} void show(){cout<<"Balance: "<<balance<<endl;} };
int main(){ BankAccount acc(1000); int ch; while(true){ cout<<"\n1.Deposit 2.Withdraw 3.Show 4.Exit: "; cin>>ch; if(ch==1){double a; cin>>a; acc.deposit(a);} else if(ch==2){double a; cin>>a; acc.withdraw(a);} else if(ch==3) acc.show(); else break;} return 0; }
