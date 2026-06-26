#include <bits/stdc++.h>
using namespace std;


int main(){ srand(time(0)); int secret=rand()%100+1, guess; cout<<"Guess number between 1 and 100: "; while(cin>>guess){ if(guess==secret){ cout<<"Correct!\n"; break;} else if(guess<secret) cout<<"Too low. Try again: "; else cout<<"Too high. Try again: "; } return 0; }
