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

void solve(int a[], int n)
{
	int low = 0, high = n - 1, mid = 0;

	while (mid <= high) {

		if (a[mid] == 0)
			swap(a[mid++], a[low++]);

		else if (a[mid] == 1)
			mid++;

		else
			swap(a[mid], a[high--]);
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
	int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
	solve(arr, n);
	for (auto i : arr) {
		cout << i << " ";
	}
}
