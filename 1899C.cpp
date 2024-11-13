// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/problemset/problem/1899/C
// problem: C. Yarik and Array
// aproch: greedy


#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int mod = 1e9+7;
const int MAX = 1e5+7;

void solve(){
    ll n;  cin>>n;
    vector<ll>vc(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vc[i];
    }
    ll ans = vc[0]; 
    ll sum = vc[0];
    for (int i = 1; i < n; i++)
    {
        sum = max(sum, 0ll);
        if((vc[i-1]%2 == 0 and vc[i]%2 != 0) or (vc[i-1]%2 != 0 and vc[i]%2 == 0)){
            sum += vc[i];
        }else{
            sum = vc[i];
        }
        
        ans = max(sum, ans);
    }
    cout<<ans<<"\n";
    
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
       int t = 1;	
       cin>>t;
       while(t--){
       solve();
    }
    
    
    return 0;
}