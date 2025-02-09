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
vector<bool>isPrime(MAX,true);
vector<ll>presum(MAX, 0);
vector<ll>prime(MAX, 0);

void seive(){
    isPrime[0] = isPrime[1] = false;
    bool key = false;
    for (ll i = 2; i*i <= MAX; i++)
    {
        if(isPrime[i]){
            for (int j = i*2; j <= MAX; j += i)
            {
                if(j%i == 0){
                    key = true;
                    isPrime[j] = false;
                }
            } 
        }
    }
    for (ll i = 2; i < MAX; i++){
        if(isPrime[i] and isPrime[(i+1)/2]){
            prime[i] = 1;
            presum[i] = 1;

        }
        
    }
    for (ll i = 1; i < MAX; i++){
        presum[i] += presum[i-1];
    }
}

void solve(){

    ll q, r;   cin>>q>>r;
    if(q == r){
        cout<<prime[q]<<'\n';
        return;
    }
    cout<<presum[r] - presum[q-1]<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
        seive();
       int t = 1;	
       cin>>t;
       while(t--){
       solve();
    }
    
    
    return 0;
}