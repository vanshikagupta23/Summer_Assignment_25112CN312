#include <bits/stdc++.h>
using namespace std;


int main(){ string name; double basic; cout<<"Enter employee name: "; cin>>name; cout<<"Enter basic salary: "; cin>>basic; double hra=0.2*basic, da=0.1*basic, pf=0.12*basic; double net=basic+hra+da-pf; cout<<"Name: "<<name<<"\nNet Salary: "<<net<<endl; return 0; }
