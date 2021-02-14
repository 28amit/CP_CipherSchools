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

int binnary(std::vector<int> v, int x, int s, int e) {
	int mid = s + (e - s) / 2;
	if (s > e) {
		return -1;
	}
	if (v[mid] == x) {
		return mid;
	}
	else if (x > v[mid]) {
		return binnary(v, x, mid + 1, e);
	}
	else {
		return binnary(v, x, s, mid - 1);
	}
}

int part(int v[], int s, int e) {
	int p = v[e];
	int i = (s - 1);
	for (int j = s; j < e; j++) {
		if (v[j] < p) {
			i++;
			swap(v[i], v[j]);
		}
	}
	swap(v[i + 1], v[e]);
	return i + 1;
}

void quick(int v[], int s, int e) {
	if (s < e) {
		int p = part(v, s, e);
		quick(v, s, p - 1);
		quick(v, p + 1, e);
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
	int v[] = {10, 7, 8, 9, 1, 5};
	int n = sizeof(v) / sizeof(v[0]);
	// int x = 44;
	// cout << binnary(v, x, 0, v.size());
	quick(v, 0, n - 1);
	for (auto i : v)
		cout << i << " ";

}
