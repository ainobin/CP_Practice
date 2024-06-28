// This Code is written by Nobin

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
    string a,b; cin>>a>>b;
    int ans = a.size() + b.size();
    int x = 0;
    for (int i = 0; i < b.size(); i++)
    {
        int idx = i;
        for (int j = 0; j < a.size(); j++)
        {
            if (b[idx] == a[j])
            {
                idx += 1;
            }
            x = max(x, idx-i);
        }
    }
    cout<<ans-x<<"\n";
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