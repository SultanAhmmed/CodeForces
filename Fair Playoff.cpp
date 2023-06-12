#include <bits/stdc++.h>


using namespace std;

void solve() {

	int s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	
	int first_pair_lowest = min(s1,s2);
	int first_pair_heighest = max(s1,s2);
	int second_pair_heighest = max(s3,s4);
	int second_pair_lowest = min(s3,s4);
 
	if((second_pair_lowest > first_pair_heighest)||(first_pair_lowest > second_pair_heighest)){
		cout << "NO" << '\n';
	}
	else{
		cout << "YES" << '\n';
	}
}


int main()
{
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
