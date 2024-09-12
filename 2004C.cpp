// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/contest/2004/problem/C
// problem: C_Splitting_Items
// aproch: Greedy


#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int mod = 1e9+7;
const int MAX = 1e5+7;

void solve(){
    ll n,k;
    cin>>n>>k;

    vector<int>vc(n);
    for(int i = 0; i<n; i++){
        cin>>vc[i];
    }
    sort(vc.begin(),vc.end(),greater<int>());
    int ans = 0;
    if(n%2){
        for(int i = 0; i<n-1; i+=2){
            auto temp = vc[i]-vc[i+1];
            if(k > 0){
                if(temp<k){
                    k -= temp;
                }else{
                    ans += temp-k;
                    k = 0;
                }

            }else{
                ans += temp;
            }
            
        }
        ans += vc[n-1];
    }else{
        
        for(int i = 0; i<n; i+=2){
            auto temp = vc[i]-vc[i+1];
            if(k > 0){
                if(temp<k){
                    k -= temp;
                }else{
                    ans += temp-k;
                    k = 0;
                }
            }else{
                ans += temp;
            } 
        }
    }
    cout<<ans<<"\n";
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