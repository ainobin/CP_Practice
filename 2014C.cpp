// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/contest/2014/problem/C
// problem: C. Robin Hood in Town
// aproch: greedy, divide and conqure


#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int mod = 1e9+7;
const int MAX = 1e5+7;

void solve(){
    ll x;   cin>>x;
    vector<int>vc(x);
    ll sum = 0;
    for (int i = 0; i < x; i++){
        cin>>vc[i];
        sum += vc[i];
    }
    if(x<3){
        cout<<-1<<"\n";
        return;
    }
    // double avg = (double)sum/x ;
    sort(vc.begin(), vc.end());
    ll mid = x/2;
    auto need = vc[mid]*(x*2)+1;
    if(sum >= need){
        cout<<0<<"\n";
        return;
    }
    cout<<need-sum<<"\n";

    
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
    
    return 0;
}