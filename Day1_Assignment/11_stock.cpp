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
int solve(std::vector<int> v) {
	int n = v.size();
	int cost = 0;
	int maxCost = 0;

	if (n == 0)
	{
		return 0;
	}

	int min_price = v[0];

	for (int i = 0; i < n; i++)
	{
		min_price = min(min_price, v[i]);
		cost = v[i] - min_price;

		maxCost = max(maxCost, cost);
	}
	return maxCost;
}
int32_t main() {
#ifndef ONLINE_JUDGE
	/* code */
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	std::vector<int> v = {7, 1, 5, 3, 6, 4 };
	cout << solve(v);
}
