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

ll bs(ll l, ll r, ll total){
    if(l > r)  return r;
    ll m = l+(r-l)/2;
    if((m*(m+1)/2) <= total)   return bs(m+1, r, total);
    else                            return bs(l, m-1, total);
}

void solve(){
    ll w,b; cin>>w>>b;
    ll total = w+b;
    
    ll ouput = bs(1ll, total, total);
    cout<<ouput<<"\n";
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