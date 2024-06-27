// This Code is written by Nobin
// Verdict: AC
// Problem link: https://codeforces.com/contest/1982/problem/B\
// Problem : Codeforces Round 955 (Div2): B. Collatz Conjecture\
// aproch : number theory, brute force, math
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
    ll x,y,k;  cin>>x>>y>>k;
    ll step = y - x%y;
    if(step>k){
        cout<<x+k<<"\n";
        k = 0;
        return;
    }
    while (k > 0 and x>1)
    {
        step = y - x%y;
        if(step>=k){
            x = x+k;
            k = 0;
        }else{
            x += step;
            k -= step;
        }
        while (x%y == 0) {
            x /= y;
        }
    }
    if(k>0){
        k = k%(y-1);
        x+=k;
        if(x%y == 0)    x /= y;
    }
    cout<<x<<"\n";
    
    
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
