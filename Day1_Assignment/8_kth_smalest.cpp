//
// Created by Amit.
//
#include<bits/stdc++.h>
#define int long long
#define MOD 1000000007
#define sort(a) sort(a.begin(),a.end())
#define endl '\n'
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
using namespace std;

int32_t main() {
#ifndef ONLINE_JUDGE
	/* code */
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	std::vector<int> v = {4, 8, 6, 0,  1, 9, 3, 2 , 6};
	int k = 3;
	priority_queue<int> h;
	for (int i = 0; i < v.size(); i++) {
		h.push(v[i]);
		if (h.size() > k) {
			h.pop();
		}
	}
	cout << h.top();
}
