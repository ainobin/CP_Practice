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

void solve(){
    vector<bool>isPrime(MAX, true);
    isPrime[0] = isPrime[1] = false;
    vector<int>vc;
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
    ll c;   cin>>c;

    int a = lower_bound(vc.begin(), vc.end(), c) - vc.begin();
    int b = upper_bound(vc.begin(), vc.end(), c) - vc.begin();

    if(a == b){
        cout<<vc[a];
    }else{
        cout<<c;
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