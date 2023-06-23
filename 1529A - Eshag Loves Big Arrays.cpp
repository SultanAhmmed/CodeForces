#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define inf 1e9+7
//#define vi vector<int>
using namespace std;

void solve() {

	int length;
	cin >> length;
	vector<int>ara;
	int mn = inf;
	for (int i = 0; i < length; ++i) {
		int x;
		cin >> x;
		mn = min(mn, x);
		ara.push_back(x);
	}
	int cnt = 0;
	for (int i = 0; i < length; ++i) {
		if (mn == ara[i]) {
			cnt++;
		}
	}
	cout << length - cnt << '\n';

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
