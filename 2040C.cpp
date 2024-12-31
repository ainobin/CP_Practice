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
    ll n, k;    cin>>n>>k;
    ll temp = 0;
    ll c = k-1;
    while (c>0)
    {
        temp++;
        c/=2;
    }
    if(n-1<60 and (1ll<<(n-1))<k){
        cout<<-1<<'\n';
        return;
    }
    vector<bool>vc(n-1);
    c = k-1;
    for (int i = n-2; c>0 and i >= 0 ; i--)
    {
        if(c%2){
            vc[i] = 1;
        }else{
            vc[i] = 0; // overflow;
        }
        c /= 2;
    }
    // for(auto it: vc){
    //     cout<<it<<" ";
    // }
    
    vector<int>ans(n);
    int l = 0, r = n-1;
    int x = 1;
    int i = 0;
    while (l<r)
    {
        if(vc[i]){
            ans[r] = x;
            x++;
            r--;
        }else{
            ans[l] = x;
            x++;
            l++;
        }
        i++;
    }
    ans[l] = x;
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
    
    

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