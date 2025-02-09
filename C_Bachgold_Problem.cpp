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
    ll a;   cin>>a;
    // vector<bool>isPrime(a+7, 1);

    // isPrime[0] = isPrime[1] = false;
    // for (ll i = 2; i*i <= a; i++){
    //     if(isPrime[i]){
    //         for (int j = 0; j*j <= a; j++){
    //             isPrime[j] = false; 
    //         } 
    //     }
    // }
    // vector<ll>vc;
    // for (int i = 0; i <= a; i++)
    // {
    //     if(isPrime[i]){
    //         vc.push_back(i);
    //     }
    // }
    // reverse(vc.begin(), vc.end());

    ll z = a;
    if(z%2 == 0){
        cout<<z/2<<"\n";
        for (int i = 0; i < z/2; i++)
        {
            cout<<2<<" ";
        }
    }else{
        cout<<z/2<<'\n';
        for (int i = 0; i < z/2-1; i++)
        {
            cout<<2<<" ";
        }
        cout<<3;
    }
    cout<<'\n';
    
    
    
    

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