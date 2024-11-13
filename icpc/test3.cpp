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
    ll n, k;    cin>>n>>k;
    vector<ll>x(n),y(n);
    ll ans = 0;
    for (int i = 0;i < n;i++)
    {
        cin>>x[i]>>y[i];
        ans += k/x[i];
    }

    cout<<"Case "<<z<<": "<<ans<<"\n";
    
    
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