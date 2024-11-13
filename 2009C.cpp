// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/contest/2009/problem/C
// problem: C. The Legend of Freya the Frog
// aproch: math


#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int mod = 1e9+7;
const int MAX = 1e5+7;

void solve(){
    ll x,y,k;   cin>>x>>y>>k;
    ll ans = 0;
    auto tempx = x/k;
    if(x%k) tempx++;

    auto tempy = y/k;
    if(y%k) tempy++;

    ans = max(tempx,tempy)*2;
    if(tempy<tempx) ans-= 1;
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