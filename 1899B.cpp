// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/problemset/problem/1899/B
// problem: B. 250 Thousand Tons of TNT
// aproch: brute force


#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int mod = 1e9+7;
const int MAX = 1e5+7;

void solve(){
    ll n;  cin>>n;
    vector<ll>vc(n);
    for (ll i = 0; i < n; i++){
        cin>>vc[i];
    }
    vector<ll>div;
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if(n%i == 0){
            div.push_back(i);
            if(i*i != n){
                div.push_back(n/i);
            }
        }
    }

    sort(div.begin(),div.end());
    ll ans = 0;
    for (auto it:div)  
    {
        ll maxVal = 0, sum = 0;
        ll minVal = LLONG_MAX;
        for (ll i = 0; i < n; i++)
        {
            sum += vc[i];
            if((i+1)%it == 0){
                maxVal = max(maxVal, sum);
                minVal = min(minVal, sum);
                ans = max(ans, maxVal-minVal);
                // cout<<maxVal<<" "<<minVal<<"\n";
                sum = 0;
            }
        }
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