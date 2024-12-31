// This Code is written by Nobin
// Verdict: AC
// problem linK:
// problem: 
// aproch: 


#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int mod = 1e9+7;
const int MAX = 1e5+7;

void solve(){
    int n;  cin>>n;
    vector<ll>vc(n);
    ll sum = 0;
    for (int i = 0; i < n; i++){
        cin>>vc[i];
        sum += vc[i];
    }
    if(sum%n){
        cout<<"NO\n";
        return;
    }
    ll target  = sum/n;
    vector<ll>temp(n);
    for (int i = 0; i < n; i++)
    {
        temp[i] = target - vc[i];
    }
    ll odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        if(i%2){
            even += temp[i];
        }else{
            odd += temp[i];
        }
 
    }
    if(odd == 0 and even == 0){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
       int t = 1;	
       cin>>t;
       while(t--){
       solve();
    }
    
    
    return 0;
}