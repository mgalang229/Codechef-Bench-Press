#include <bits/stdc++.h>

using namespace std;

const int limit = 1e5;
vector<int> frequency(limit + 1);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, w, wr;
		cin >> n >> w >> wr;
		// set all the values of 'frequency' vector to 0 (initial)
		fill(frequency.begin(), frequency.end(), 0);
		for (int i = 0; i < n; i++) {
			int num;
			cin >> num;
			// count the frequency of each weight
			frequency[num]++;
		}
		long long total = wr;
		for (int i = 1; i <= limit; i++) {
			// divide the frequency by 2 to get the number of times (even) that the weights
			// will be placed in the left and right side (balanced), then, multiply the current 
			// weight by 2 since it needs to placed in the left and right side. Lastly, multiply 
			// the two derived values to get the weight placed in the rod and add it to 'total'
			total += ((long long) i * 2 * (frequency[i] / 2));
		}
		cout << (total >= w ? "YES" : "NO") << '\n';
	}
	return 0;
}
