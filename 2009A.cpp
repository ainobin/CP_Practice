// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/problemset/problem/2009/A
// problem: A. Minimize!
// aproch: implementation


#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int mod = 1e9+7;
const int MAX = 1e5+7;

void solve(){
    int a,b;    cin>>a>>b;
    auto temp = min(a,b);
    cout<<(a-temp)+(b-temp)<<endl;
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