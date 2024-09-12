// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/contest/2001/problem/A
// problem: A_Make_All_Equal
// aproch: Greedy


#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int mod = 1e9+7;
const int MAX = 1e5+7;

void solve(){
    int n;  cin>>n;
    map<int,int>mp;
    for(int i = 0; i<n; i++){
        int temp;   cin>>temp;
        mp[temp] ++;

    }
    int high = 0;
    for(auto it:mp){
        high = max(it.second, high);
    }
    cout<<n-high<<"\n";
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