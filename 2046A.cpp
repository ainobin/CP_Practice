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
    int n;  cin>>n;
    vector<ll>vc1(n),vc2(n);
    for (int i = 0; i < n; i++){
        cin>>vc1[i];
    }
    for (int i = 0; i < n; i++){
        cin>>vc2[i];
    }
    ll ans = -1e11;
    for (int i = 0; i < n; i++)
    {
        ll temp = vc1[i]+vc2[i];
        for (int j = 0; j < n; j++)
        {
            if(i != j){
                temp += max(vc1[j],vc2[j]);
            }
        }
        ans = max(temp, ans);
        
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