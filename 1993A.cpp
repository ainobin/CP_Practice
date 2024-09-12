// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/problemset/problem/1993/A
// problem: A_Question_Marks
// aproch: Greedy


#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int mod = 1e9+7;
const int MAX = 1e5+7;

void solve(){
    int n;  cin>>n;
    string st; cin>>st;
    map<char,int>mp;
    for (int i = 0; i < st.size(); i++)
    {
        auto z = st[i];
        if(z != '?')    mp[z]+= 1;
        
    }
    int ans = 0;
    for (auto it:mp)
    {
        auto x = it.second;
        ans +=  min(x, n);
    }
    cout<<ans<<"\n";
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