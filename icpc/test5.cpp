// This Code is written by Nobin
// Verdict: AC
// problem linK:
// problem: 
// aproch: 


#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int mod = 1e9+7;
const int MAX = 1e5+7;

void solve(int z){

    ll n, p;    cin>>n>>p;
    if(n == 1){
        if(p == 1){
            cout<<"Case "<<z<<": "<<"Evenius"<<"\n";
        }else{
            cout<<"Case "<<z<<": "<<"Oddius"<<"\n";
        }
        return;
    }
    cout<<"Case "<<z<<": "<<"Oddius"<<"\n";   
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
       int t = 1;	
       cin>>t;
       int z = 1;
       while(t--){
       solve(z);
       z++;
    }
    
    
    return 0;
}