// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/contest/1987/problem/C
// problem: C. Basil's Garden : EPIC Institute of Technology Round Summer 2024 (Div. 1 + Div. 2)
// aproch: Greedy

#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int N = 1e9+7;

void solve(){
    int n;  cin>>n;
    int m = 0;
    vector<ll>vc(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vc[i];
    }
    ll ans = 0;
    for (int i = 0; i < n; i++){
        ans = max(ans, vc[i]+i);
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