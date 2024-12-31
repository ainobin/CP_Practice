// This Code is written by Nobin
// Verdict: AC
// problem linK:
// problem: 
// aproch: 


#include<bits/stdc++.h>

using namespace std;
#define ll      long long
const int mod = 1e9+7;
const int MAX = 1e5+7;

void solve(){
    string st;  cin>>st;
    ll sum = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < st.size(); i++)
    {
        sum += st[i] - '0';
        if(st[i] == '2')    c2++;
        if(st[i] == '3')    c3++;
    }
    if(sum%9ll == 0){
        cout<<"YES\n";
        return;
    }
    
    for (int i = 0; i <= min(c2, 100ll); i++)
    {
        for (int j = 0; j <= min(c3, 100ll); j++)
        {
            if(((sum + (i*2ll) + (j*6ll ))%9ll) == 0){
                cout<<"YES\n";
                return;
            }
        }
        
    }

    cout<<"NO\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
       int t = 1;	
       cin>>t;
       while(t--){
       solve();
    }
    
    
    return 0;
}