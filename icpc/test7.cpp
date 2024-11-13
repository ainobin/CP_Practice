// This Code is written by Nobin
// Verdict: AC
// problem linK:
// problem: 
// aproch: 


#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int mod = 998244353;
const int MAX = 1e5+7;

void solve(){
    ll ans = 7*7;
    for (int i = 0; i < 6; i++)
    {
        ans *= 6;
        if(ans>=mod){
            ans %= mod;
        }
    }
    for (int i = 0; i < 16; i++)
    {
        ans *= 5;
        if(ans>=mod){
            ans %= mod;
        }
    }
    
    for (int i = 0; i < 16; i++)
    {
        ans *= 4;
        if(ans>=mod){
            ans %= mod;
        }
    }
    cout<<ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
       int t = 1;	
    //    cin>>t;
       while(t--){
       solve();
    }
    
    
    return 0;
}