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
vector<ll>prime;
vector<int>notprime;

void seive(){
    vector<bool>isPrime(MAX,true);
    isPrime[0] = isPrime[1] = false;
    bool key = false;
    for (ll i = 2; i*i < MAX; i++)
    {
        if(isPrime[i]){
            for (int j = i*2; j < MAX; j += i)
            {
                if(j%i == 0){
                    key = true;
                    isPrime[j] = false;
                }
            } 
        }
    }
    for (ll i = 2; i < MAX; i++)
    {
        if(isPrime[i] == false){
            notprime.push_back(i);
        }
    }
}

bool Does_exist( ll target, ll L, ll R){
    while (L <= R)
    {
        // Value of INT_MAX = 2147483647
        // use this to prevent ovrflow;
        ll M = L+(R-L)/2;

        if(notprime[M] == target) return true;
        if(notprime[M] < target){
            L = M+1;
        }else
        {
            R = M-1;
        }
    }
    return false;
}
void solve(ll n){
    ll lw = lower_bound(notprime.begin(), notprime.end(), n) - notprime.begin();
    for (int i = 0; i <= min(lw, (ll)notprime.size() - 1); i++)
    {
        ll temp = n-notprime[i];
        if(Does_exist(temp, i, lw)){
            cout<<notprime[i]<<" "<<temp<<'\n';
            return;
        }
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    seive();
       ll n;    cin>>n;
        solve(n);
        return 0;
}