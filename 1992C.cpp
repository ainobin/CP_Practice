// This Code is written by Nobin
// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/problemset/problem/1992/C
// problem: Gorilla and Permutation
// aproch: Constractive algorithm

#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int N = 1e9+7;

void solve(){
    ll n, m, k; cin>>n>>m>>k;

    for (int i = n; i >= k; i--)
    {
        cout<<i<<" ";
    }
    for (int i = m+1; i <= k-1; i++)
    {
        cout<<i<<" ";
    }
    for (int i = 1; i <= m; i++)
    {
        cout<<i<<" ";
    }
    cout<<"\n";

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