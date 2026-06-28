#include <bits/stdc++.h>
using namespace std;


int main(){ int seats=50, ch; while(true){ cout<<"\nAvailable seats: "<<seats<<"\n1.Book 2.Cancel 3.Exit: "; cin>>ch; if(ch==1){int n; cout<<"Seats to book: "; cin>>n; if(n<=seats){seats-=n; cout<<"Booked\n";} else cout<<"Not enough seats\n";} else if(ch==2){int n; cout<<"Seats to cancel: "; cin>>n; seats+=n; cout<<"Cancelled\n";} else break;} return 0; }
