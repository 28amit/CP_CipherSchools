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

int MissingNumber(vector<int>& array, int n) {
	int total = (n + 1) * (n) / 2;
	for (int i = 0; i < n - 1; i++)
		total -= array[i];
	return total;
}

int32_t main() {
#ifndef ONLINE_JUDGE
	/* code */
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 10};
	cout << MissingNumber(v, v.size());
}
