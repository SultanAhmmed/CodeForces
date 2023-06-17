#include <bits/stdc++.h>

#define ll long long
using namespace std;

void solve() {

	ll length;
	cin >> length;

	vector<ll>ara(length);

	for (auto &i : ara) {
		cin >> i;
	}

	ll ans = 0;
	for (int i = 1; i < length; ++i) {
		ans = max(ans, 1LL * ara[i] * ara[i - 1]);
	}
	cout << ans << '\n';



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
