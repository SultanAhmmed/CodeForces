#include <bits/stdc++.h>

#define ll long long
using namespace std;

void solve() {

	int length_line;
	cin >> length_line;
	
	vector<int>ara(10, 0);

	for (int j = 0; j < length_line; ++j) {

		char ch;
		cin >> ch;

		if (ch == 'L') {
			for (int i = 0; i < 10; ++i) {
				if (ara[i] == 0) {
					ara[i] = 1;
					break;
				}
			}
		}
		else if (ch == 'R') {

			for (int i = 9; i >= 0; --i) {
				if (ara[i] == 0) {
					ara[i] = 1;
					break;
				}
			}
		}
		else {

			ara[ch - '0'] = 0;
		}

	}

	for (auto i : ara) {
		cout << i;
	} cout << '\n';

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	// int tests;
	// cin >> tests;
	// while (tests--) {
	solve();
	// }
}

