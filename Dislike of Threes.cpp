#include <bits/stdc++.h>

using namespace std;

void solve() {

	int number;
	cin >> number;
	int ans = 0;

	while (number != 0) {

		ans++;

		if ((ans % 3 == 0) || (ans % 10 == 3)) {
			continue;
		}

		--number;

	}
	cout << ans << '\n';

}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int tests;
	cin >> tests;

	while (tests--) {
		solve();
	}
	return 0;
}
