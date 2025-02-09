// This Code is written by Nobin
// Verdict: AC
// problem linK:
// problem: 
// aproch: 


#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int mod = 1e9+7;
const int MAX = 1e5+7;

void solve(){
    ll n;   cin>>n;
    map<char, ll>mp;
    char x = 'a';
    for (int i = 0; i < 26; i++)
    {
        mp[x] = 0;
        x++;
        // cout<<x<<" "<<mp[x]<<"\n";
    }
    for (int i = 0; i < n; i++)
    {
        string st;  cin>>st;
        mp[st[0]] += 1;
    }
    ll ans = 0;
    // for (auto it:mp)
    // {
    //     cout<<it.first<<" "<<it.second<<'\n';
    // }
    for (auto it:mp)
    {
        auto z = it.second-1;

        if(it.second>1){
            ans+= ((z*(z+1))/2);
        }
    }
    cout<<ans<<'\n';

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