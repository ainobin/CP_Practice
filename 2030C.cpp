// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/contest/2030/problem/C
// problem: C. A TRUE Battle
// aproch: game theory


#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int mod = 1e9+7;
const int MAX = 1e5+7;

void solve(){
    int n;
    cin>>n;
    string st;  cin>>st;

    int zero= 0, one = 0;
    if(st[0] == '1' or st[n-1] == '1'){
        cout<<"YES\n";
        return;
    }
    for (int i = 0; i < n-1; i++)
    {
        if(st[i] == '1' and st[i+1] == '1'){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
    
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