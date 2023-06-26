#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define inf 1e9+7

using namespace std;

void solve() {

	int length;
	cin >> length;

	string line;
	cin >> line;

	string checker = line;

	sort(line.begin(), line.end());

	int cnt = 0;

	for ( int i = 0; i < length; ++i )
	{
		if (line[i] != checker[i]) cnt++;
	}
	cout << cnt << '\n';


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
