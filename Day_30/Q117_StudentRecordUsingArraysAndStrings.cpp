#include <bits/stdc++.h>
using namespace std;


int main(){ int n;
     cout<<"Enter students: "; 
     cin>>n;
      vector<string> name(n);
       vector<int> roll(n);
        vector<double> marks(n); 
        for(int i=0;i<n;i++)
        { cout<<"Roll Name Marks: ";
             cin>>roll[i]>>name[i]>>marks[i]; } 
             for(int i=0;i<n;i++)
              cout<<roll[i]<<" "<<name[i]<<" "<<marks[i]<<endl;
             return 0; 
            }
