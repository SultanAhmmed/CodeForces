#include <bits/stdc++.h>

#define ll long long
using namespace std;

void solve() {

	int number;
	cin >> number;

	vector<int>ara(number);
	for (auto &i : ara) {
		cin >> i;
	}

	int l_min_pos = min_element(ara.begin(), ara.end()) - ara.begin() + 1;
	int l_max_pos = max_element(ara.begin(), ara.end()) - ara.begin() + 1;

	int r_min_pos = number - l_min_pos + 1;
	int r_max_pos = number - l_max_pos + 1;

	int from_r = max( r_min_pos, r_max_pos );
	int from_l  = max( l_min_pos, l_max_pos );

	int pre_ans = min(l_min_pos + r_max_pos, l_max_pos + r_min_pos);

	int ans = min(pre_ans, min(from_l, from_r));

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
