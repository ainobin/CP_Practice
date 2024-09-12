// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/problemset/problem/1993/B
// problem: B_Parity_and_Sum
// aproch: Greedy


#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int mod = 1e9+7;
const int MAX = 1e5+7;

void solve(){
    ll n;  cin>>n;
    vector<ll>vc(n);
    ll even = 0;
    ll high = 0;
    ll high_odd = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>vc[i];
        if(vc[i]%2 == 0)    even++;
        high = max(high,vc[i]);
        if(vc[i]%2) high_odd = max(high_odd,vc[i]);
        
    }
    sort(vc.begin(), vc.end());
    bool flag = true;
    ll count = even;
    ll sum = high_odd;
    for (int i = 0; i < n; i++)
    {
        
        if(vc[i]%2 == 0){
            if(vc[i] > sum){
                count += 1;
                break;
            }
            sum += vc[i];
        }
    }
    
    if(even == 0 or even == n){
        cout<<0<<"\n";
        return;
    }
    // if(sum<high) cout<<even+1<<"\n";
    else    cout<<count<<"\n";
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;  cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}