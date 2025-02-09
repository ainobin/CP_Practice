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

void solve(){
    ll n;   cin>>n;
    ll divMax = 0;
    bool key = false;
    for (ll i = 2; i*i <= n; i++){
        if(n%i == 0){
            key = true;
            divMax = max(divMax, i);
        }
    }
    if(key){
        ll ans = divMax + (n/divMax) - 2;
        cout<<ans<<'\n';
    }else{
        cout<<n-1<<'\n';
    }

    
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