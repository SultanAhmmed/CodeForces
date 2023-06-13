#include <bits/stdc++.h>


#define ll long long
using namespace std;

void solve() {

	ll n, z;
	cin >> n >> z;

	vector<ll>ara(n);

	for (int i = 0 ; i < n; ++i) {
		cin >> ara[i];
	}

	int first_number = 0, second_number = 0 , ans = 0;
	for (ll i = 0; i < n; ++i) {

		first_number = (ara[i] | z);
		second_number = (ara[i] & z);

		ans  = max(max(first_number, second_number), ans);

	}
	cout << ans << '\n';

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
