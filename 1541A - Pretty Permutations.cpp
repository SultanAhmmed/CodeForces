#include <bits/stdc++.h>

#define ll long long
using namespace std;

void solve() {

	int number;
	cin >> number;

	if (number % 2 == 1) {

		cout << "3 1 2 ";
		for (int i = 4; i <= number; i += 2) {
			cout << i + 1 << " " << i << " ";

		}
		cout << "\n";
	}
	else {
		for (int i = 1; i <= number; i += 2) {
			cout << i + 1 << " " << i << " ";
		} cout << "\n";
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
