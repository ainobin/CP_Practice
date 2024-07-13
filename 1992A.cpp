// This Code is written by Nobin
// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/problemset/problem/1992/A
// problem: Only Pluses 
// aproch: brute force

#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int N = 1e9+7;

void solve(){
    ll a,b,c;   cin>>a>>b>>c;
    int x = 5;
    while (x--)
    {
        if (a<=b and a<=c)
        {
            a+= 1;
        }else if(b<=a and b<=c){
            b+= 1;
        }else{
            c+= 1;
        }
        
    }
    cout<<a*b*c<<"\n";
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}