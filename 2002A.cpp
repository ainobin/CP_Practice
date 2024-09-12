// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/problemset/problem/2002/A
// problem: A_Distanced_Coloring
// aproch: Implementation


#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int mod = 1e9+7;
const int MAX = 1e5+7;

void solve(){
    int a,b,x;  cin>>a>>b>>x;
    cout<<min(a,x)*min(b,x)<<"\n";
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