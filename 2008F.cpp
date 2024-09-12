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

ll poww(ll a, ll b) {
    ll res = 1;
    while(b > 0) {
        if(b & 1) {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b /= 2;
    }
    return res;
};


void solve(){
    ll n;  cin>>n;
    vector<ll>vc(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>vc[i];
        sum += vc[i];
    }
    // sort(vc.begin(),vc.end(),greater<ll>());
    ll final_sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = (sum - vc[i] + mod)%mod;
        final_sum += (sum*vc[i]) % mod;
        if(final_sum>mod){
            final_sum %= mod;
        }
    }
    ll pairs = ((ll)n*(n-1)/2)%mod;
    final_sum = (final_sum * poww(pairs, mod - 2)) % mod;

    cout<<final_sum<<"\n";
    
    
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