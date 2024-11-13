// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/problemset/problem/1904/b
// problem: B. Collecting Game
// aproch: greedy, stack


#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int mod = 1e9+7;
const int MAX = 1e5+7;

void solve(){
    int n;  cin>>n;
    vector<ll>vc(n), sum(n), ans(n+7);
    vector<pair<ll,int>>temp(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vc[i];
        temp[i] = {vc[i], i};
    }
    sort(temp.begin(), temp.end());
    // sort(vc.begin(), vc.end());

    sum[0] = temp[0].first;
    for (int i = 1; i < n; i++)
    {
        sum[i] = sum[i-1]+temp[i].first;
    }

    stack <int>stk;

    for (int i = 0; i < n; i++)
    {
        stk.push(temp[i].second);
        if((i == n-1) or (sum[i] < temp[i+1].first)){
            while (!stk.empty())
            {
                ans[stk.top()] = i;
                stk.pop();
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    
    cout<<"\n";
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

