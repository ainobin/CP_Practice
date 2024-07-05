// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/contest/1987/problem/B
// problem: K Sort : EPIC Institute of Technology Round Summer 2024 (Div. 1 + Div. 2)
// aproch: Greedy

#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int N = 1e9+7;

void solve(){
    ll n;  cin>>n;
    vector<ll>vc(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vc[i];
    }
    ll temp = 0;
    ll ans = 0;
    for (int i = 1; i < n; i++)
    {
        if(vc[i-1]>vc[i]){
            ans += vc[i-1]-vc[i];
            temp = max(temp,vc[i-1]-vc[i]);
            vc[i] = vc[i-1];
        }
    }
    cout<<ans+temp<<"\n";
    
    
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