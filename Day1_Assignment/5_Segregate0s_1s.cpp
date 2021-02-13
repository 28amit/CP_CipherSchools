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
void solve(int A[], int N)
{

	int low = 0, high = N - 1;


	while (low <=  high) {

		if (A[low] == 0) {
			low++;
		}


		else if (A[high] == 1) {
			high--;
		}

		else {
			int temp = A[low];
			A[low] = A[high];
			A[high] = temp;
			low++;
			high--;
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
	int  v[] = {0, 1, 0, 1, 1, 1};
	int n = sizeof(v) / sizeof(v[0]);
	solve(v, n);
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}
