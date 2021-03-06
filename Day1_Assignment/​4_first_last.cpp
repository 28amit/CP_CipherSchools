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

int first(std::vector<int> v, int x, int s, int e) {
	if (e >= s) {
		int mid = s + (e - s) / 2;
		if ((mid == 0 || x > v[mid - 1]) && v[mid] == x) {
			return mid;
		}
		else if (x > v[mid]) {
			return first(v, x, mid + 1, e);
		}
		else {
			return first(v, x, s, mid - 1);
		}
	}
	return -1;
}

int second(std::vector<int> v, int x, int s, int e) {
	if (e >= s) {
		int mid = s + (e - s) / 2;
		if ((mid == v.size() - 1 || x < v[mid + 1]) && v[mid] == x) {
			return mid;
		}
		else if (x < v[mid]) {
			return second(v, x, s, mid - 1);
		}
		else {
			return second(v, x, mid + 1, e) ;
		}
	}
	return -1;
}

int32_t main() {
#ifndef ONLINE_JUDGE
	/* code */
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	std::vector<int> v = {1, 2, 2, 2, 2, 3, 4, 7, 8, 8};
	int x = 8;
	int s = 0, e = v.size() - 1;
	cout << first(v, x, s, e) << " " << second(v, x, s, e);


}
