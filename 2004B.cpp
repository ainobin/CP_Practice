// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/contest/2004/problem/B
// problem: B_Game_with_Doors
// aproch: Greedy

#include<bits/stdc++.h>
 
using namespace std;
#define ll      long long
const int mod = 1e9+7;
const int MAX = 1e5+7;
 
void solve(){
    ll a,b,x,y; cin>>a>>b>>x>>y;
    ll ans = min(b,y) - max(a,x);
    if(ans < 0){
        cout<<1<<"\n";
        return;
    }
    if(a>x) ans += 1;
    if(x>a) ans += 1;
    
    if(b<y) ans += 1;
    if(y<b) ans += 1;

    // if(b == x)  ans += 1;

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