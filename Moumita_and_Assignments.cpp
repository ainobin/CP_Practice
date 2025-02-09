// This Code is written by Nobin
// Verdict: AC
// problem linK:
// problem: https://www.spoj.com/problems/MAS/
// aproch: 

#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const ll mod = 2760727302517;
const int MAX = 1e5+7;

long long mul(long long a, long long b){
    if(b == 0)
        return 0;
    if(b & 1)
        return (mul(a, b - 1) + a) % mod;
    long long half = mul(a, b >> 1);
    return (half + half) % mod;
}

void add(ll a, ll b, ll &sum, ll &sqSum, vector<ll>&vc){
    sum = (sum + b - vc[a] + mod)%mod;
    sqSum = (sqSum + mul(b, b) - mul(vc[a], vc[a]) + mod)%mod;
    vc[a] = b;
}

void solve(int x){
    ll  n, q;
    cin>>n>>q;
    vector<ll>vc(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vc[i];
    }
    ll sum = 0, sqSum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += vc[i];
        sqSum += (vc[i]*vc[i]);

        sum%=mod;
        sqSum%=mod;
    }
    cout<<"Case "<<x<<":\n";
    x++;
    while(q--){
        int v;  cin>>v;
        if(v == 1){
            ll a, b;    cin>>a>>b;
            a--;
            add(a, b, sum, sqSum, vc);
        }else if(v == 2){
            ll a, b;    cin>>a>>b;
            a--;
            add(a, vc[a]+b, sum, sqSum, vc);
        }else if(v == 3){
            // cout<<sqSum<<" "<<sum<<"\n";
            cout<<((n*sqSum)%mod - mul(sum,sum) + mod)%mod<<"\n";
        }
    
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
       int t = 1;
       int x = 1;	
       cin>>t;
       while(t--){
       solve(x);
       x++;
    }
    return 0;
}