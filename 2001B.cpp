// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/problemset/problem/2001/B
// problem: B_Generate_Permutation
// aproch: Greedy


#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int mod = 1e9+7;
const int MAX = 1e5+7;

void solve(){
    int n;  cin>>n;
    if(n%2 == 0){
        cout<<-1<<"\n";
        return;
    }
    for(int i = n; i>0; i-=2){
        cout<<i<<" ";
    }
    for(int i = 2; i<n; i+=2){
        cout<<i<<" ";
    }
    cout<<"\n";
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