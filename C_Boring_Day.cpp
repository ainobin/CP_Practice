// This Code is written by Nobin
// Vardict : AC
// problem link: https://codeforces.com/contest/1982/problem/B
// Problem : Codeforces Round 955 (Div2): C. Boring Day
// approch : Greedy


#include<bits/stdc++.h>
using namespace std;

#define YES     cout << "YES" << "\n"
#define Yes     cout << "Yes" << "\n"
#define yes     cout << "yes" << "\n"
#define NO      cout << "NO" << "\n"
#define No      cout << "No" << "\n"
#define no      cout << "no" << "\n"
#define ll      long long

void solve(){
    ll n, l, r;   
    cin >> n >> l >> r;
    vector<ll> vc(n);
    for (int i = 0; i < n; i++) {
        cin >> vc[i];
    }
    ll temp = 0;
    ll ans = 0;
    ll x = 0;
    for (int i = 0; i < n; ++i) {
        temp += vc[i];
        while (temp > r and x<=i)
        {
            temp -= vc[x++];
        }
        if(temp >= l && temp <= r) {
            ans++;
            temp = 0;
            x = i+1;
        }
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
