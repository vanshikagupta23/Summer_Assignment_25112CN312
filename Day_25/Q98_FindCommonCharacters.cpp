#include <bits/stdc++.h>
using namespace std;


int main(){
    string a,b; cout<<"Enter first string: "; getline(cin,a); cout<<"Enter second string: "; getline(cin,b);
    vector<int> f1(256,0), f2(256,0); for(char c:a) f1[(unsigned char)c]++; for(char c:b) f2[(unsigned char)c]++;
    cout<<"Common characters: ";
    for(int i=0;i<256;i++) for(int k=0;k<min(f1[i],f2[i]);k++) cout<<(char)i;
    cout<<endl; return 0;
}
