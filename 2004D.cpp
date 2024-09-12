// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/contest/2004/problem/D
// problem: D. Colored Portals
// aproch: Binary Search

#include<bits/stdc++.h>

using namespace std;

#define ll      long long
const int mod = 1e9+7;
const int MAX = 1e5+7;
ll get(ll x, ll y, string st, map<string, vector<int>> &mp ){
    ll ans = mod;
    
    ll ind = lower_bound(mp[st].begin(), mp[st].end(), x) - mp[st].begin();
    ll s = mp[st].size();

    for (int i = max(ind-1,0ll); i < min(ind+1,s); i++)
    {
        ll index = mp[st][i];
        if(index <=y and index >=x){
            ans = min(ans, y-x);
        }else{
            auto temp = abs(x-index) + abs(y-index);
            ans = min(ans, temp);
        }
    }
    return ans;
    
}


void solve(){
    int n, q;
    cin>>n>>q;
    vector<string>vc(n);
    map<string, vector<int>>mp;
    for(int i=0; i<n; i++){
        cin>>vc[i];
        mp[vc[i]].push_back(i);
    }

    while (q--)
    {
        int x,y;    cin>>x>>y;
        if(x>y) swap(x,y);
        
        x--;
        y--;
        if((vc[x][0] == vc[y][0]) || (vc[x][1] == vc[y][1]) || (vc[x][1] == vc[y][0]) || (vc[x][1] == vc[y][1])){
            cout<<y-x<<"\n";
        }else{
            ll ans = mod;
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    string temp = "";
                    temp.push_back(vc[x][i]); 
                    temp.push_back(vc[y][j]);
                    sort(temp.begin(),temp.end());
                    ans = min(ans, get(x,y, temp, mp));
                }
                
            }
            if(ans < mod){
                cout<<ans<<"\n";
            }else{
                cout<<-1<<"\n";
            }
            
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin>>t;
    while (t--) {
        solve();
    }

    return 0;
}