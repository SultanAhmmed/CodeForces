#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define inf 1e9+7

using namespace std;

void solve() {

	int length;
	cin >> length;

	vector<ll>ara(length);
	for (auto &i : ara) cin >> i;

	vector<ll> ::iterator it_max, it_min;

	it_max = max_element(ara.begin(), ara.end());
	it_min = min_element(ara.begin(), ara.end());

	cout << (*it_max - *it_min) << '\n';

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
