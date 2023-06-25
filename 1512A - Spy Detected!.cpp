#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define inf 1e9+7

using namespace std;

void solve() {

	int n;	cin >> n;
	vector<int>ara(n);

	for (auto &i : ara) {
		cin >> i;
	}

	map<int, int>mp;

	for (int i = 0; i < n; i++) mp[ara[i]]++;

	int pos = 0;
	for (int i = 0; i < n; i++) if (mp[ara[i]] == 1) pos = i;

	cout << pos + 1 << '\n';

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
