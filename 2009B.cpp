// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/contest/2009/problem/B
// problem: B. osu!mania
// aproch: implementation


#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int mod = 1e9+7;
const int MAX = 1e5+7;

void solve(){
    int x;  cin>>x;
    vector<string>vc(x);
    for (int i = 0; i < x; i++)
    {
        cin>>vc[i];
    }
    vector<int>ans;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(vc[i][j] == '#'){
                ans.push_back(j+1);
            }
        }
    }
    reverse(ans.begin(),ans.end());
    for (int i = 0; i < x; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;  
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;  cin>>t;
    while (t--)
    {
        solve();
    }
    
    
    return 0;
}