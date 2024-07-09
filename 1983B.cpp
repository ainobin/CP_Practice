// This Code is written by Nobin
// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/contest/1983/problem/B
// problem: Corner Twist
// aproch: greedy

#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int N = 1e9+7;

void solve(){
    int n,m;    cin>>n>>m;
    vector<vector<int>>vc1(n, vector<int>(m));
    vector<vector<int>>vc2(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        string st;
        cin>>st;
        for (int j = 0; j < m; j++)
        {
            vc1[i][j] = st[j] - '0';
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        string st;
        cin>>st;
        for (int j = 0; j < m; j++)
        {
            vc2[i][j] = st[j] - '0';
        }
        
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < m-1; j++)
        {
            auto diff = (vc2[i][j] - vc1[i][j] + 3)%3;
            
            if(diff == 0)   continue;
            if (diff == 1){
                vc1[i][j] = (vc1[i][j]+1)%3;
                vc1[i+1][j+1] = (vc1[i+1][j+1]+1)%3;
                vc1[i+1][j] = (vc1[i+1][j]+2)%3;
                vc1[i][j+1] = (vc1[i][j+1]+2)%3;

                // cout<<i<<" "<<j;
            }else{
                vc1[i][j] = (vc1[i][j]+2)%3;
                vc1[i+1][j+1] = (vc1[i+1][j+1]+2)%3;
                vc1[i+1][j] = (vc1[i+1][j]+1)%3;
                vc1[i][j+1] = (vc1[i][j+1]+1)%3;
            }
            
        }
        
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout<<vc1[i][j]<<" ";
    //     }
    //     cout<<"\n";
        
    // }


    if (vc1 == vc2){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    
    
    
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