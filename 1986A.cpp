// This Code is written by Nobin
// Vardict : AC
// problem link: https://codeforces.com/contest/1986/problem/A
// another approch without my solution The answer is equal to x3−x1 when x3 is greatest and x1 is smallest

#include<bits/stdc++.h>

using namespace std;
#define ll      long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;  cin>>t;
    while (t--)
    {
        int x1,x2,x3;   cin>>x1>>x2>>x3;
        int m1 = min(x1,x2);
        m1 = min(m1, x3);

        int m2 = max(x1,x2);
        m2 = max(m2,x3);
        int ans = INT_MAX;
        for (int i = m1; i <= m2; i++)
        {
            ans = min(abs(x1-i)+abs(x2-i)+abs(x3-i), ans);
            // cout<<i<<" ";
        }
        cout<<ans<<"\n";
        
    }
    return 0;
}
