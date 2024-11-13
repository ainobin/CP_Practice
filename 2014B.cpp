// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/contest/2014/problem/B
// problem: B. Robin Hood and the Major Oak
// aproch: math


#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int mod = 1e9+7;
const int MAX = 1e5+7;

void solve(){
    ll x,k; cin>>x>>k;
    ll t1 = x-k+1;
    ll odd = 0;
    if(k == 1){
        if(x%2){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
        return;
    }
    if((t1%2 == 0) and (x%2 == 0)){
        odd = (x-t1)/2;
    }else{
        odd = (x-t1)/2 + 1;
    }
    
    if(odd%2){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
    }
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