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
    string st; cin>>st;
    stack<char>stk;
    for (int i = 0; i < st.size(); i++)
    {
        if(st[i] == '('){
            stk.push('(');
        }else{
            if(stk.empty()){
                cout<<"No\n";
                return;
            }else stk.pop();
        }
    }
    if(stk.empty()) cout<<"Yes\n";
    else cout<<"No\n";
    
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