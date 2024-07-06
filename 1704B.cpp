// This Code is written by Nobin
// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/problemset/problem/1704/B
// problem: Luke is a foodie
// aproch: greedy

#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int N = 1e9+7;

void solve(){
    ll n, k;    cin>>n>>k;
    vector<ll>vc(n);
    for (int i = 0; i < n; i++){
        cin>>vc[i];
    }
    ll lb = vc[0];
    ll up = vc[0];
    ll ans = 0;
    for (int i = 1; i < n; i++){
        lb = min(lb, vc[i]);
        up = max(up, vc[i]); 
        if(up-lb > 2*k){
            ans += 1;
            lb = up = vc[i]; 
        }
    } 
    
    cout<<ans<<'\n';
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;  cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}