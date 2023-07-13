#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define inf 1e9+7

using namespace std;

void solve() {

	int cards;
	cin >> cards;

	vector<int>ara(cards);
	for(auto &i: ara) cin >> i;
	
	int seja_sum = 0, Dipa_sum = 0,move = 1;
	while(!ara.empty()){
		if(move==1){
			if(*ara.begin() >ara.back()){
			 seja_sum+=*ara.begin();
			 ara.erase(ara.begin());
			}
			else{
				seja_sum += ara.back();
				ara.pop_back();
			}
			move = 2;
		}
		else {
			if(*ara.begin() >ara.back()){
			 Dipa_sum += *ara.begin();
			 ara.erase(ara.begin());
			}
			else{
				Dipa_sum += ara.back();
				ara.pop_back();
			}
			move = 1;
		}


	}
	cout << seja_sum << " " << Dipa_sum << '\n';


}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	// int tests;
	// cin >> tests;
	// while (tests--) {
		solve();
	// }
}
