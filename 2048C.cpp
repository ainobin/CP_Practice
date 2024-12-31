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
    int length = -1;
    ll ind ;
    for (int i = 0; i < st.size(); i++)
    {
        if(st[i] == '0'){
            length = st.size() - i;
            ind = i;
            break;
        }
    }
    if(length == -1){
        cout<<1<<" "<<st.size()<<" 1 1"<<"\n";
        return;
    }
    vector<pair<string, pair<ll, ll>>>vc;
    for (int i = 0; i < st.size() - length; i++)
    {
        string tempst = st;
        string temp = st.substr(i, length);
        ll tempind = ind;
        for (int j = 0; j < length; j++)
        {
            if(st[tempind++] == temp[j]){
                tempst[ind+j] = '0';
            }else{
                tempst[ind+j] = '1';
            }
        }
        vc.push_back({tempst,{i+1, i+length}});
        
    }
    pair<string, pair<ll, ll>> output = *max_element(vc.begin(),vc.end());

    cout<<1<<" "<<st.size()<<" "<<output.second.first<<" "<<output.second.second<<"\n";
    
    
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