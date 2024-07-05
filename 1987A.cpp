// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/contest/1987/problem/A
// problem: Upload More Ram : EPIC Institute of Technology Round Summer 2024 (Div. 1 + Div. 2)
// aproch: Greedy


#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int N = 1e9+7;

void solve(){
    ll a,k;    cin>>a>>k;
    if (a == 1)
    {
        cout<<1<<"\n";
    }else{
        cout<<(a-1)*k + 1<<"\n";
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;  cin>>t;
    while(t--){
        solve();
    }
    return 0;
}