// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/contest/2019/problem/A
// problem: A. Max Plus Size
// aproch: greedy


#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int mod = 1e9+7;
const int MAX = 1e5+7;

void solve(){
    int x;  cin>>x;
    vector<int>vc(x);
    ll maxval = 0;
    ll maxind = -1;
    for (int i = 0; i < x; i++){
        cin>>vc[i];
        if(vc[i]>=maxval){
            if(maxval == vc[i]){
                if(maxind%2){
                    continue;
                }
            }
            maxval = vc[i];
            maxind = i+1;
        }
    }
    if(x%2 == 0){
        cout<<maxval+(x+1)/2<<"\n";
    }else{
        if(maxind%2){
            cout<<maxval+(x+1)/2<<"\n";
        }else{
            cout<<maxval+(x+1)/2 - 1<<"\n";
        }
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