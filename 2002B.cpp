// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/problemset/problem/2002/B
// problem: B_Removals_Game
// aproch: Greedy


#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int mod = 1e9+7;
const int MAX = 1e5+7;

void solve(){
    int n;  cin>>n;
    vector<int>vc1(n),vc2(n);
    for (int i = 0; i < n; i++){
        cin>>vc1[i];
    }
    for (int i = 0; i < n; i++){
        cin>>vc2[i];
    }
    int j = n-1;
    int k = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if(vc1[i] == vc2[k]){
            k += 1;
        }else if(vc1[i] == vc2[j]){
            j -= 1;
        }else{
            flag = true;
            break;
        }
    }
    reverse(vc1.begin(),vc1.end());
    j = n-1;
    k = 0;
    for (int i = 0; i < n; i++)
    {
        if(vc1[i] == vc2[k]){
            k += 1;
        }else if(vc1[i] == vc2[j]){
            j -= 1;
        }else{
            flag = true;
            break;
        }
    }
    if(!flag){
        cout<<"Bob\n";
    }else{
        cout<<"Alice\n";
    }
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}