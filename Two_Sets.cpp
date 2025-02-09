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
    ll n ; cin>>n;
    ll total = (n*(n+1))/2;
    if(total%2){
        cout<<"NO\n";
        return;
    }
    total/=2;
    vector<ll>ans1,ans2;
    for (ll i = n; i > 0; i--)
    {
        if(total >= i){
            ans1.push_back(i);
            total -= i;
        }else{
            ans2.push_back(i);
        }
    }
    cout<<"YES\n";
    cout<<ans1.size()<<"\n";
    for (int i = 0; i < ans1.size(); i++)
    {
        cout<<ans1[i]<<" ";
    }
    cout<<'\n';
    cout<<ans2.size()<<'\n';
    for (int i = 0; i < ans2.size(); i++)
    {
        cout<<ans2[i]<<" ";
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
       int t = 1;	
    //    cin>>t;
       while(t--){
       solve();
    }
        
    return 0;
}