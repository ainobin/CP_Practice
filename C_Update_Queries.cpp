// This Code is written by Nobin
// verdict: AC
// problem link: https://codeforces.com/contest/1986/problem/C
// problem : Codeforces Round 954 (Div. 3) : C. Update Queries
// approch : sort, greedy


#include<bits/stdc++.h>

using namespace std;
#define ll      long long

void solve(){
    int a,b;    cin>>a>>b;
    string st1,st2;
    cin>>st1;
    set<int>vc;
    for (int i = 0; i < b; i++)
    {
        int temp;   cin>>temp;
        vc.insert(temp);
    }
    cin>>st2;
    sort(st2.begin(),st2.end());
    int x = 0;
    for (auto it:vc)
    {       
        st1[it-1] = st2[x++];
    }
    cout<<st1<<"\n";
    
    
    
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