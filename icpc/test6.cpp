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
    ll a,b,c; cin>>a>>b>>c;
    auto x = (a+b+c);
    auto s = (x-(2*a))*(x-(2*b))*(x-(2*c));
    auto q = x;

    cout<<s<<" "<<q<<"\n";
    auto sq = sqrt(q);
    for (int i = 2; i < sq+1; i++)
    {
        if((s%i == 0) and (q%i == 0)){
            s = s/i;
            q = q/i;
        }
    }
    cout<<s<<"/"<<q<<"\n";
    
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