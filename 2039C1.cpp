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
    ll x, m;    cin>>x>>m;
    ll ans = 0;
    for (ll i = 1; (i <= 2*x) and (i<=m); i++)
    {
        if(i == x)  continue;
        ll z = i^x;
        if(x%z == 0 or i%z == 0){
            ans++;
        }
    }
    cout<<ans<<'\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
       int t = 1;	
       cin>>t;
       while(t--){
       solve();
    }
    
    
    return 0;
}