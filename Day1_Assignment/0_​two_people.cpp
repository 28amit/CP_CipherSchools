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

bool Naive(int x1, int x2, int v1, int v2) {
	if (x1 > x2 && v1 > v2) {
		return false;
	}
	if (x2 > x1 && v2 > v1) {
		return false;
	}
	if (x2 > x1) {
		swap(x2, x1);
		swap(v2, v1);
	}
	while (x1 >= x2) {
		if (x1 == x2) {
			return true;
		}
		x1 += v1;
		x2 += v2;
	}
	return false;
}

bool Efficient(int x1, int x2, int v1, int v2) {
	if (x1 > x2 && v1 > v2) {
		return false;
	}
	if (x2 > x1 && v2 > v1) {
		return false;
	}
	if (abs(x1 - x2) % abs(v1 - v2) == 0) {
		return true;
	}
	return false;
}


int32_t main() {
#ifndef ONLINE_JUDGE
	/* code */
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x1 = 5, x2 = 4, v1 = 8, v2 = 7;

	// if (Naive(x1, x2, v1, v2))
	// 	cout << "Yes";
	// else
	// 	cout << "No";

	if (Efficient(x1, x2, v1, v2))
		cout << "Yes";
	else
		cout << "No";

}
//complexity O(1)
