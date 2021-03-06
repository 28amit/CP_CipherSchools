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

int solve(std::vector<int> v, int x, int l, int h) {
	if (l > h) {
		return -1;
	}
	int mid = (l + h) / 2;
	if (v[mid] == x) {
		return mid;
	}
	else if (v[mid] >= v[l]) {
		if (x <= v[mid] && x >= v[l]) {
			return solve(v, x, l, mid - 1);
		}
		else {
			return solve(v, x, mid + 1, h);
		}
	}
	else {
		if (x >= v[mid] && x <= v[h]) {
			return solve(v, x, mid + 1, h);
		}
		else {
			return solve(v, x, l, mid - 1);
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
	std::vector<int> v = {4, 5, 6, 7, 8, 9, 1, 2, 3};
	int x = 1;
	cout << solve(v, x, 0, v.size() - 1);
}
