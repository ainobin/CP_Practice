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

    ll ans = 0 ;
    for (ll y = 1; (y < 2*x) and (y<=m); y++)
    {
        ll z = x^y;
        if((z < 2*x) and (z%x == 0 or z%y == 0)){
            ans++;
        }
    }
    if(m-x >= 2*x){
        ans += ((m-x)/x) - 1;
    }
    for (ll z = m-x+1; z <= m+x; z++)
    {
        if(z%x)    continue;
        ll y = z^x;
        if(y >= 1 and y <= m){
            ans++;
        }
    }
    cout<<ans<<"\n";
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
       ll t = 1;	
       cin>>t;
       while(t--){
       solve();
    }

    return 0;
}