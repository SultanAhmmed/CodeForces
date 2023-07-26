/**********************************
		--------------------------
	Bismillahir Rahmanir Rahim
---------------------------

**********************************/
#include <bits/stdc++.h>

using namespace std;

#define ll 			long long
#define ull 		unsigned long long
#define inf 		1e9+7
#define testCase() 	int t;cin >> t;while(t--)
#define optimised()	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

/******************************-[SnowKingTree]-**************************************/

void FrostMelon() {
	int k , r;
	cin >> k >> r;

	ll ans = 0;
	int i = 1;
	while(i <= 10){
		ans = k * i % 10;
		
		if(ans == r or ans == 0){
			ans = i;
			break;
		}
 		i++;
}
	cout << ans << '\n';

}
int main() {
	optimised();
	// testCase()
		FrostMelon();

}
