#include <bits/stdc++.h>

#define ll long long
using namespace std;

void solve() {

	ll length_ara;
	cin >> length_ara;

	vector<ll>ara(length_ara);

	for (ll i = 0; i < length_ara; i++) {
		cin >> ara[i];
	}

	sort(ara.begin(), ara.end());

	cout << ara[length_ara - 1] + ara[length_ara - 2] - ara[0] - ara[1] << '\n';


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

