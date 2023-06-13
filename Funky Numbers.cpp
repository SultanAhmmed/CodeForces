#include <bits/stdc++.h>

#define ll long long
using namespace std;


void solve() {

	vector<ll>ara;
	ll sum = 0;
	for (int i = 1; i <= 100000; ++i)
	{
		sum += i;
		ara.push_back(sum);
	}

	ll n;
	cin >> n;

	ll low = 0, heigh = ara.size() - 1, fig = 0;

	while (low <= heigh) {

		if (ara[low] + ara[heigh] > n) {
			heigh--;
		}
		else if (ara[low] + ara[heigh] < n) {
			low++;
		}
		if (ara[low] + ara[heigh] == n) {
			fig = 1;
			break;
		}

	}
	cout << (fig == 1 ? "YES" : "NO") << '\n';

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	solve();

	return 0;
}
