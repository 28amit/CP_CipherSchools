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

//Moore’s Voting Algorithm
int Moore(std::vector<int> v) {
	int maj = v[0], counter = 1;
	for (int i = 1; i < v.size(); i++) {
		if (v[i] == maj) {
			counter++;
		}
		else {
			counter--;
		}
		if (counter == 0) {
			maj = v[i];
			counter = 1;
		}
	}
	return maj;
}

bool check(std::vector<int> v, int maj) {
	int cnt = 0;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == maj) {
			cnt++;
		}
		if (cnt > v.size() / 2) {
			return true;
		}
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
	std::vector<int> v = {1, 1, 2, 1, 3, 5, 1};
	int maj = Moore(v);
	if (check(v, maj)) {
		cout << maj;
	}
	else {
		cout << "No majority element";
	}
}

//Time Complexity: O(n)
// Auxiliary Space: O(1)
