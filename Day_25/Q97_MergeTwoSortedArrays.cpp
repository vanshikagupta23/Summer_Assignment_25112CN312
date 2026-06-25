#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,m; cout<<"Enter size of first array: "; cin>>n; vector<int>a(n);
    cout<<"Enter elements: "; for(int &x:a) cin>>x;
    cout<<"Enter size of second array: "; cin>>m; vector<int>b(m);
    cout<<"Enter elements: "; for(int &x:b) cin>>x;
    vector<int> res; int i=0,j=0;
    while(i<n && j<m) res.push_back(a[i] <= b[j] ? a[i++] : b[j++]);
    while(i<n) res.push_back(a[i++]); while(j<m) res.push_back(b[j++]);
    cout<<"Merged array: "; for(int x:res) cout<<x<<" "; cout<<endl; return 0;
}
