#include <bits/stdc++.h>

using namespace std;

void solve() {

	int number;
	cin >> number;
	if(number<=4){
		cout << "Bob" << '\n';
	}
	else{
		cout << "Alice" << '\n';
	}

}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int tests;
	cin >> tests;

	while (tests--) {
		solve();
	}
	return 0;
}
