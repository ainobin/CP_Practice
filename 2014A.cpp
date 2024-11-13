// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/contest/2014/problem/a
// problem: A. Robin Helps
// aproch: greedy


#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int mod = 1e9+7;
const int MAX = 1e5+7;

void solve(){
    int x,k;cin>>x>>k;
    vector<int>vc(x);
    for (int i = 0; i < x; i++)
    {
        cin>>vc[i];
    }
    int ans = 0, p=0;
    for (int i = 0; i < x; i++)
    {
        if(vc[i] == 0){
            if(p>0){
                ans++;
                p--;
            }
        }else{
            if(vc[i]>=k){
                p += vc[i];
            }
        } 
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