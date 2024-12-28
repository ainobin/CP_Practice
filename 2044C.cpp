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
    ll m, a, b, c; cin>>m>>a>>b>>c;
    ll ans = 0;
    ll total = m*2;
    if(m>a){
        ans += a;
    }else{
        ans += m;
    }

    if(m>b){
        ans += b;
    }else{
        ans += m;
    }

    if(total > ans){
        ans += min((total-ans), c);
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