// This Code is written by Nobin
// Verdict: AC
// problem linK: https://codeforces.com/contest/2004/problem/A
// problem: A_Closest_Point
// aproch: Implementation

#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> vc(n);
	for(int i = 0; i < n; i++) cin >> vc[i];
	if(n > 2) {
		cout << "NO" << '\n';
		return;
	}
	if(vc[1]-vc[0] == 1) {
		cout << "NO" << '\n';
	} else {
		cout << "YES" << '\n';
	}
}

int main() {
	
	int t; cin >> t;
	while(t--) {
		solve();
	}	
}
