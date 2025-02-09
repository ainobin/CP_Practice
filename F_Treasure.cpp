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
    int n, q;  cin>>n>>q;
    bool key = false;
    for (int i = 0; i < q; i++)
    {
        string st; cin>>st;
        if(st == "out"){
            n--;
        }else if(st == "in"){
            n++;
        }

        if(n<4){
            key = true;
        }
    }
    if(key){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    
    
 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
       int t = 1;	
    //    cin>>t;
       while(t--){
       solve();
    }
    
    
    return 0;
}