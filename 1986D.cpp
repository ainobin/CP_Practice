// This Code is written by Nobin
// Verdict: AC
// Problem link : https://codeforces.com/problemset/problem/1986/D
// problem : D. Mathematical Problem
// approch : greedy, brute force

#include<bits/stdc++.h>

using namespace std;

#define YES     cout << "YES" << "\n"
#define Yes     cout << "Yes" << "\n"
#define yes     cout << "yes" << "\n"
#define NO      cout << "NO" << "\n"
#define No      cout << "No" << "\n"
#define no      cout << "no" << "\n"
#define ll      long long

void solve()
{
    ll n;   cin>>n;
    string st;  cin>>st;
    if(n == 2){
        int z = (st[0]-'0')*10 + (st[1]-'0');
        cout<<z<<"\n";
        return;
    }
    if(st[0] == '0'){
        cout<<0<<"\n";
        return;
    }
    // ll valu = INT_MAX;
    // ll idx;
    // for (int i = 1; i < n-1; i++)
    // {
    //     ll temp = (st[i]-'0')*10 + (st[i+1]-'0');
    //     if (temp<valu)
    //     {
    //         valu = temp;
    //         idx = i;
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (i == idx){
    //         i = idx+2;
    //     }        
    // }
    ll ans = INT_MAX;
    for (int i = 0; i < n-1; i++)
    {
        ll temp = (st[i]-'0')*10 + (st[i+1]-'0');
        for (int j = 0; j < n; j++)
        {
            if (j == i)
            {
                j = j+2;
                if(j >= n)   break;
            }
            int t2 = st[j] - '0';
            if(t2>1 and temp>1){
                temp += t2;
            }else if (t2 == 0)
            {
                cout<<0<<"\n";
                return;
            }if(temp == 1){
                temp *= t2;
            }       
        }
        ans = min(ans,temp);
    }
    cout<<ans<<"\n";
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