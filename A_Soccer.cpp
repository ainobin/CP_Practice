// This Code is written by Nobin
// Vardict : AC
// problem link: https://codeforces.com/contest/1982/problem/A
// problem: Codeforces Round 955 (Div2): A. Soccer
// approch: implementation

#include<bits/stdc++.h>

using namespace std;

#define YES     cout << "YES" << "\n"
#define Yes     cout << "Yes" << "\n"
#define yes     cout << "yes" << "\n"
#define NO      cout << "NO" << "\n"
#define No      cout << "No" << "\n"
#define no      cout << "no" << "\n"
#define ll      long long

void solve(){
    ll x1,y1,x2,y2;    cin>>x1>>y1>>x2>>y2;
    if(x2>=y2 and y1>=x1){
        NO;
        return;
    }else if(x2 <= y2 and y1 <= x1){
        NO;
        return;
    }
    else{
        YES;
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