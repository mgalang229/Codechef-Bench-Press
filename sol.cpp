#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long n, w, rod;
		cin >> n >> w >> rod;
		vector<long long> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// sort the sequence in non-decreasing order
		sort(a.begin(), a.end());
		long long left = 0;
		long long right = 0;
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				// if the current element is in even position (zero-based), then add it to 'left'
				left += a[i];
			} else {
				// if the current element is in odd position (zero-based), then add it to 'right'
				right += a[i];
			}
			// check if 'left' and 'right' are equal
			if (left == right) {
				// if yes, then add the current weight times 2 (left and right) to 'rod'
				rod += (2 * a[i]);
			}
		}
		cout << (rod >= w ? "YES" : "NO") << '\n';
	}
	return 0;
}
