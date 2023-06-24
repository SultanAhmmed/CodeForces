#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define inf 1e9+7
//#define vi vector<int>
using namespace std;

void solve() {

	string s;
	cin >> s;

	map<char, int>mp;

	for (int i = 0; i < s.size(); ++i) mp[s[i]]++;
	int cnt1 = 0 , cnt2 = 0;
	for (auto i : mp) {
		if (i.second >= 2) cnt2++;
		else cnt1++;
	}

	cout << cnt2 + cnt1 / 2 << '\n';

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
