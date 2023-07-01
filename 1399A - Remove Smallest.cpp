#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define inf 1e9+7

using namespace std;

void solve() {

	int n;	cin >> n;

	vector<int> ara(n);

	for (auto &i : ara) {
		cin >> i;
	}
	sort(ara.begin(), ara.end());
	ara.erase(unique(ara.begin(), ara.end()), ara.end());

	if (ara.size() == 1) cout << "Yes" << '\n';
	else {
		for (int i = 0 ; i < ara.size() - 1; ++i) {
			int ans = abs(ara[i] - ara[i + 1]);
			if (ans > 1) {
				cout << "No" << '\n';
				return;
			}
		}
		cout << "Yes" << '\n';
	}

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
