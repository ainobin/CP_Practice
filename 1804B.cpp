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
    ll n, k, d, w; cin>>n>>k>>d>>w;
    vector<ll>vc(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vc[i];
    }
    ll ans = 0;
    ll j = 0;
    ll x = k;
    for (int i = 0; i < n; i++)
    {
        if(i==0 or x<1 or vc[i]>j){
            ans++;
            j = vc[i]+d+w;
            x = k;
        }
        x--;

    }
    cout<<ans<<"\n";
    
    
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