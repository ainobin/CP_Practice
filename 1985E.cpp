// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/problemset/problem/1985/E
// problem: Secret Box : Codeforces Round 952 (Div. 4)
// aproch: Math, Geometry

#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int N = 1e9+7;

void solve(){
    ll x,y,z,k; cin>>x>>y>>z>>k;
    ll ans = 0;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            if (k%(1*j) != 0) 
            {
                continue;
            }
            ll c = k/(i*j);
            if (c > z)
            {
                continue;
            }if (i*j*c == k)
            {
                ll temp = (x-i+1)*(y-j+1)*(z-c+1);
                // cout<<(x-i+1)<<" "<<(y-j+1)<<" "<<(z-c+1);
                ans = max(ans, temp);
                
            }
        }
    }
    cout<<ans<<"\n";
    
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