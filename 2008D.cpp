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

vector<int>vc;
string st;


int dp[MAX];
int total = 0;
vector<int>pos;
int srt = -1;



void vis(int x){
    if(st[x] == '0'){
        total += 1;
    }
    pos.push_back(x);
    if (srt == vc[x]){
        return;
    }
    vis(vc[x]);
}

void solve(){
    int n;  cin>>n;
    vc.clear();
    vc.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vc[i];
        vc[i] -= 1;
    }
    cin>>st;
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < n; i++)
    {
        total = 0;
        pos.clear();
        if(dp[vc[i]] != -1){
            continue;
        }
        srt = vc[i];
        vis(srt);
        for (int j = 0; j < pos.size(); j++)
        {
            dp[pos[j]] = total;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<dp[i] <<" ";
    }
    
    cout<<"\n";
    
    
    
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