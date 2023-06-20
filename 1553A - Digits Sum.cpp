#include <bits/stdc++.h>

#define ll long long
using namespace std;

void solve() {

	ll number;
	cin >> number;
	ll ans = number % 10;
	if (ans == 9) {
		number += 1;
		cout << number / 10 << '\n';
	}
	else {
		cout << number / 10 << '\n';
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
