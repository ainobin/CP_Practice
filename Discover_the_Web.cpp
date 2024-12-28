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

void solve(int x){
    cout<<"Case "<<1<<": \n";
    string st1,st2;
    stack<string>back, front;
    back.push("http://www.lightoj.com/");
    while (cin>>st1)
    {
        if(st1 == "QUIT") break;
        else if(st1 == "VISIT"){
            cin>>st2;
            back.push(st2);
            cout<<back.top()<<'\n';
            while (!front.empty()){
                front.pop();
            }
        }
        else if(st1 == "BACK" and back.size()>1){
            front.push(back.top());
            back.pop();
            cout<<back.top()<<"\n";
        }else if(st1 == "FORWARD" and !front.empty()){
            back.push(front.top());
            front.pop();
            cout<<back.top()<<"\n";
        }else{
            cout<<"Ignored\n";
        }
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
       int t = 1;
       int x =1;	
       cin>>t;

    while(t--){
       solve(x);
       x++;
    }
    
    
    return 0;
}