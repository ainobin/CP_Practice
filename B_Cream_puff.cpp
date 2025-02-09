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
    ll x;
    cin>>x;

    set<ll>st;
    
    for (ll i = 1; i*i < x; i++)
    {
        if(x%i == 0){
            st.insert(i);
            st.insert(x/i);
        }
    }
    for(auto it:st){
        cout<<it<<'\n';
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