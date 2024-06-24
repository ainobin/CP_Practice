// This Code is written by Nobin
// Verdict : AC
// problem link:https://codeforces.com/contest/1986/problem/B
// problem : Codeforces Round 954 (Div. 3) : B. Matrix Stabilization
// approch : brute force



#include<bits/stdc++.h>

using namespace std;
#define ll      long long

void solve(){
    int n,m;    cin>>n>>m;
    vector<vector<int>>vc(n,vector<int>(m)), vc2(n,vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>vc[i][j];
        }
        
    }
    // left to right;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            
            int valu = 0;
            bool key = false;
            if(i-1 >= 0){
                valu = max(valu, vc[i-1][j]);
                if (valu >= vc[i][j]){
                    key = true;
                }
                
            }
            if(j-1 >= 0){
                valu = max(valu, vc[i][j-1]);
                if (valu >= vc[i][j]){
                    key = true;
                }
            }
            if (i+1 < n){
                valu = max(valu, vc[i+1][j]);
                if (valu >= vc[i][j]){
                    key = true;
                }
            }
            if (j+1 < m){
                valu = max(valu, vc[i][j+1]);
                if (valu >= vc[i][j]){
                    key = true;
                }
            }
            if (!key)
            {
                vc[i][j] = valu;
            } 
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<vc[i][j]<<" ";
        }
        cout<<"\n";
        
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