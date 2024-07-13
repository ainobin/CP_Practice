// This Code is written by Nobin
// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/problemset/problem/1992/B
// problem: Angry Monk
// aproch: Greedy

#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int N = 1e9+7;

void solve(){
    ll total, n, most = 0;    cin>>total>>n;
    vector<ll>vc(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vc[i];
        if(most<vc[i]){
            most = vc[i];
        }
    }
    bool key = true;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (most == vc[i] and key)
        {
            key = false;
            continue;
        }
        ans += vc[i] + (vc[i]-1);
    }
    cout<<ans<<"\n";
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;  cin>>t;
    while (t--){
        solve();
    }
    
    return 0;
}