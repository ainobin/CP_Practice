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
    vector<pair<ll,int>>a(n),b(n),c(n);
    
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin>>x;
        a[i] = {x, i};
    }
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin>>x;
        b[i] = {x, i};
    }
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin>>x;
        c[i] = {x, i};
    }
    // vector<pair<ll,int>>ansa,ansb,ansc;
    // for (int i = 0; i < n; i++)
    // {
    //     if(a[i]>=b[i] and a[i]>=c[i]){
    //         ansa.push_back(a[i]);
    //     }else if(b[i]>a[i] and b[i]>c[i]){
    //         ansb.push_back(b[i]);
    //     }else{
    //         ansc.push_back(c[i]);
    //     }
    // }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    reverse(c.begin(), c.end());

    ll finalans = 0;
    for (int i = 0; i < 3; i++)
    {
        
        ll ans = a[i].first;
        int p = a[i].second;
        // cout<<"a "<<a[i].first<<" "<<a[i].second<<" "<<ans<<"\n";
        for (int j = 0; j < 3; j++)
        {
            int q = b[j].second;
            ll temp = ans;
            // cout<<"b "<<b[j].first<<" "<<b[j].second<<"\n";
            if(q != p){
                temp += b[j].first;
                
            }else{
                continue;
            }
            for (int k = 0; k < 3; k++)
            {
                int r = c[k].second;
                ll temp2 = temp;
                if(r != p and r != q){
                    temp2 += c[k].first;
                    finalans = max(temp2, finalans);
                }
                // cout<<"c "<<c[k].first<<" "<<c[k].second<<" " <<temp2<<"\n";
                temp2 = temp;
            }
            temp = ans;
            
        }
        
    }


    cout<<finalans<<"\n";
    
    
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