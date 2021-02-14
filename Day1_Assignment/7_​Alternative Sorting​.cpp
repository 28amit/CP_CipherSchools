//
// Created by Amit.
//
#include<bits/stdc++.h>
#define int long long
#define MOD 1000000007

#define endl '\n'
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
using namespace std;

vector<int> solve(int arr[], int N)
{

	sort(arr, arr + N);
	vector<int> ans;

	int i = 0, j = N - 1;
	while (i < j) {
		ans.push_back(arr[j--]);
		ans.push_back(arr[i++]);
	}


	if (N % 2 != 0)
		ans.push_back(arr[i]);
	return ans;

}

int32_t main() {
#ifndef ONLINE_JUDGE
	/* code */
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int v[] = {1, 12, 4, 6, 7, 10};
	int n = sizeof(v) / sizeof(v[0]);
	std::vector<int> ans = solve(v, n);
	for (auto i : ans) {
		cout << i << " ";
	}
}
