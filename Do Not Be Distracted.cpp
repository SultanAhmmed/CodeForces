#include <bits/stdc++.h>

using namespace std;

void solve() {

	int range;
	cin >> range;

	string line;
	cin >> line;

	line.erase(unique(line.begin(), line.end()), line.end());
	string sorted = line;
	sort(sorted.begin(), sorted.end());
	sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());
	cout << (sorted.size() != line.size() ? "NO" : "YES") << '\n';


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
