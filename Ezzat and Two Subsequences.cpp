#include <bits/stdc++.h>


#define ll long long
using namespace std;

void solve() {

	int n;
	cin >> n;

	vector<int>ara(n);

	for (int i = 0; i < n; ++i) {
		cin >> ara[i];
	}

	int max_number = ara[0];

	ll sum  = 0;

	for (int i = 0; i < n; ++i) {
		if (ara[i] > max_number) {
			max_number = ara[i];
		}
		sum += ara[i];
	}

	double ans  = (double)(sum - max_number) / (n - 1) + max_number;

	cout << fixed << setprecision(10) << ans << '\n';


}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int tests;
	cin >> tests;

	while (tests--) {
		solve();
	}


	return 0;
}
