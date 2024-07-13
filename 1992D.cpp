// This Code is written by Nobin
// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/problemset/problem/1992/B
// problem: Test of Love
// aproch: Implementation

#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int N = 1e9+7;

void solve(){
    ll n, m, k; cin>>n>>m>>k;
    string st;  cin>>st;
    ll jump = m-1;
    ll swim = 0;
    bool key = false;
    for (int i = 0; i < n; i++)
    {
        if (st[i] == 'L'){
            jump = m;
        }else if(st[i] == 'W' and jump<1){
            swim += 1;
            if (swim > k){
            cout<<"NO\n";
            return;
        }
        }else if(st[i] == 'C' and jump<1){
            key = true;
        }
        jump -= 1;
    }
    
    if (key){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
    }
    
    
    
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