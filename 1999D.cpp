// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/problemset/problem/1999/D
// problem: D. Slavic's Exam
// aproch: greedy, implenetation


#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int mod = 1e9+7;
const int MAX = 1e5+7;

void solve(){
    string st1, st2;    cin>>st1>>st2;
    int x1 = st1.size();
    int x2 =  st2.size();
    int  i = 0, j= 0;
    while (i<x1 and j<x2)
    {
        if (st1[i] == st2[j])  
        {
            i++;
            j++;
        }else if(st1[i] == '?'){
            st1[i] = st2[j];
            i++;
            j++;
        }else{
            i++;
        }
        
    }
    for (int i = 0; i < x1; i++)
    {
        if(st1[i] == '?'){
            st1[i] = 'a';
        }
    }
    if(j == x2){
        cout<<"YES\n"<<st1<<"\n";
    }else
    {
        cout<<"NO\n";
    }
    
    
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