#include <bits/stdc++.h>
using namespace std;


int main(){ string name; int n; cout<<"Enter student name: "; cin>>name; cout<<"Enter number of subjects: "; cin>>n; double total=0; for(int i=1;i<=n;i++){ double m; cout<<"Marks in subject "<<i<<": "; cin>>m; total+=m; } double per=total/n; cout<<"Name: "<<name<<"\nTotal: "<<total<<"\nPercentage: "<<per<<"%\nGrade: "<<(per>=90?'A':per>=75?'B':per>=60?'C':'D')<<endl; return 0; }
