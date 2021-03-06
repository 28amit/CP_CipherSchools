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

int solve(std::vector<int> v, int l, int r) {
	int mid = l + (r - l) / 2;
	if (mid == 0 && v[mid] >= v[mid + 1]) {
		return v[mid];
	}
	if (mid == v.size() - 1 && v[mid - 1]) {
		return v[mid];
	}
	if (v[mid] >= v[mid - 1] && v[mid] >= v[mid + 1]) {
		return v[mid];
	}
	else {
		if (mid > 0 && v[mid] < v[mid + 1]) {
			return solve(v, mid + 1, r);
		}
		else {
			return solve(v, l, mid - 1);
		}

	}
}

int32_t main() {
#ifndef ONLINE_JUDGE
	/* code */
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	std::vector<int> v = {10, 20, 15, 2, 23, 90, 67};
	int l = 0, r = v.size() - 1;
	int ans = solve(v, l, r);
	cout << ans;
	return 0;

}
