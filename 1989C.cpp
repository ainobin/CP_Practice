// This Code is written by Nobin
// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/problemset/problem/1989/C
// problem: C. Two Movies : Educational Codeforces Round 167 (Rated for Div. 2)
// aproch: greedy

#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int N = 1e9+7;

void solve(){
    ll n;   cin>>n;
    vector<int>a(n),b(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    ll ans1=0, ans2=0, pos = 0, neg = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>b[i])       ans1 += a[i];
        else if(a[i]<b[i])  ans2 += b[i];
        else if(a[i] == 1 and b[i] == 1)      pos++;
        else if(a[i] == -1 and b[i] == -1)    neg++;

        
    }

    while (pos--)
    {
        if (ans1<ans2)  ans1++;
        else            ans2++;        
    }
    while (neg--)
    {
        if(ans1<ans2)   ans2--;
        else            ans1--;
    }
    
    
    cout<<min(ans1,ans2)<<"\n";
    
    
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