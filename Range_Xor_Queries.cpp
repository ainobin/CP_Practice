// This Code is written by Nobin
// Verdict: AC
// problem linK: https://cses.fi/problemset/task/1650
// problem: 
// aproch: 


#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int mod = 1e9+7;
const int MAX = 1e5+7;

void solve(){
    int n, q;
    cin>>n>>q;
    vector<ll>vc(n);
    for (int i = 0; i < n; i++){
        cin>>vc[i];
    }
    for(int i = 1; i<n; i++){
        vc[i] = vc[i-1]^vc[i];
    }
    while (q--)
    {
        int l,r;    cin>>l>>r;
        l--, r--;
        if(l == 0){
            cout<<vc[r]<<'\n';
        }else{
            cout<<(vc[r]^vc[l-1])<<'\n';
        }
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