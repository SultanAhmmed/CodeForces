#include <bits/stdc++.h>

#define ll long long
using namespace std;

void solve() {

	int number;
	cin >> number;

	double d_ans = sqrt(number);
	int i_ans = sqrt(number);

	if (d_ans != i_ans) {
		cout << i_ans + 1 << '\n';
	}
	else {
		cout << i_ans << '\n';
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
