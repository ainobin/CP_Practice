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
    ll n ;  cin>>n;
    vector<bool>isPrime(n+3,true);

    isPrime[0] = isPrime[1] = false;
    bool key = false;
    ll x = 2;
    n = n + 1;
    for (int i = x; i*i <= n; i++)
    {
        if(isPrime[i]){
            for (int j = i*2; j <= n; j += i)
            {
                if(j%i == 0){
                    key = true;
                    isPrime[j] = false;
                }
            } 
        }
    }
    if(key){
        cout<<2<<'\n';
    }else{
        cout<<1<<'\n';
    }
    for (int i = x; i <= n; i++)
    {
        if(isPrime[i]){
            cout<<1<<" ";
        }else{
            cout<<2<<" ";
        }
    }
    
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
       int t = 1;	
    //    cin>>t;
       while(t--){
       solve();
    }
    
    
    return 0;
}