#include <bits/stdc++.h>

#define ll long long
#define ull	unsigned long long
#define inf 1e9+7

using namespace std;

void solve() {

	int length;
	cin >> length;
	ll ara[length];

	for (auto &i : ara) cin >> i;

	set<int>ara_set;
	vector<int>ans;

	for (int i = length - 1; i >= 0; --i) {

		if (ara_set.count(ara[i]) == 0) {
			ara_set.insert(ara[i]);
			ans.push_back(ara[i]);
		}
	}
	cout << ans.size() << '\n';
	reverse(ans.begin(), ans.end());
	for (auto i : ans) cout << i << " ";

}


int main() {
	solve();
}
