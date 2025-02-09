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
    vector<ll>vc(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vc[i];
    }
    sort(vc.begin(), vc.end());
    int hello = -1;
    int fail = -1;
    bool key = false;
    ll ans = 0;
    ll temp = 0;
    int w = 0, y= 0;
    for (int i = 0; i < n; i++)
    {
        auto x = vc[0];
        int count = 0;
        int mfs = 0;
        while (x>0)
        {
            mfs ++;
            x<<1;
        }
        
        if(mfs == hello){
            key = true;
        }
        if(key and (mfs != hello)){
            y = i;
            break;
        }
        hello = mfs;
    }

    if(!key){
        ans = 0;
        for (int i = 1; i < n; i++)
        {
            ans = ans | vc[i];
        }
        cout<<ans<<'\n';
    }else{

    }
    
    
    
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