#include <bits/stdc++.h>

#define ll long long
using namespace std;

void solve() {
	ll number;
	cin >> number;

	int cnt = 0;
	for (int i = 1; i <= number; i = i * 10 + 1) {
		for (int j = 1; j <= 9; ++j) {
			if (i * j <= number) {
				cnt++;
			}
		}
	}
	cout << cnt << '\n';

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int tests;
	cin >> tests;
	while (tests--) {
		solve();
	}
}
