#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	// simple follow the rules in the problem statement
	int mx = INT_MIN;
	for (int i = 0; i < n; i++) {
		int f, t;
		cin >> f >> t;
		if (t <= k) {
			// if 't' is less than or equal to 'k', then store 'f' to 'mx'
			mx = max(mx, f);
		} else {
			// otherwise, store the difference of 'f' and 't' plus 'k' to 'mx'
			mx = max(mx, f - t + k);
		}
	}
	cout << mx << '\n';
	return 0;
}
