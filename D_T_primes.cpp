// This Code is written by Nobin
// Verdict: AC
// problem linK:
// problem: 
// aproch: 


#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int mod = 1e9+7;
const int MAX = 1e6+7;

vector<ll>vc;

void solve(){
    
    ll x;   cin>>x;
    ll temp = sqrt(x);
    ll a = lower_bound(vc.begin(), vc.end(), temp) - vc.begin();
    ll b = upper_bound(vc.begin(), vc.end(), temp) - vc.begin();

    // cout<<temp<<" "<<a<<" "<<b<<" ";
    if((a != b) and (temp*temp == x)){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<bool>isPrime(MAX, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i*i < MAX; i++)
    {
        if(isPrime[i]){
            for (int j = i*2; j < MAX; j += i){
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i < MAX; i++){
        if(isPrime[i]){
            vc.push_back(i);
        }
    }
       int t = 1;	
       cin>>t;
       while(t--){
       solve();
    }
    
    
    return 0;
}