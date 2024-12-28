// This Code is written by Nobin

#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int MAX = 1e5 + 7;

void solve() {
    ll n;
    cin >> n;
    vector<int> vc(n), ans;
    set<int> st;

    for (int i = 0; i<n; i++) {
        cin >> vc[i];
        if (st.find(vc[i]) == st.end()) {
            ans.push_back(vc[i]);
            st.insert(vc[i]);
        }
    }

    for (int i = 1; ans.size()<n; i++) {
        if (st.find(i) == st.end()) {
            ans.push_back(i);
        }
    }

    for (int num:ans) {
        cout << num << " ";
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
