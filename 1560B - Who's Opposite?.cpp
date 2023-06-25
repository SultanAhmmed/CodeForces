#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define inf 1e9+7

using namespace std;

void solve() {

	ll a, b, c;
	cin >> a >> b >> c;

	ll n = 2 * abs(a - b);

	if (a > n || b > n || c > n) {
		cout << "-1" << '\n';
	}
	else {
		ll d = n / 2 + c;
		while (d > n) d -= n;
		cout << d << '\n';
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
