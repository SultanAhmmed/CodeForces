#include <bits/stdc++.h>

#define ll long long
using namespace std;

void solve() {

	int first_number, second_number;
	cin >> first_number >> second_number;

	first_number = abs(first_number);
	second_number = abs(second_number);

	if (first_number != second_number) {
		int  ans  = max( first_number, second_number );
		cout << 2 * ans - 1 << '\n';
	}
	else {
		cout << 2 * first_number << '\n';
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
