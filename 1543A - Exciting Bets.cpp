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
	ll a,b;
	cin >> a >> b;

	if(a == b) cout << 0 << " " << 0 << '\n';
	
	else{
		ll ans = abs(a - b);
		ll ans_moves = min( a % ans , ans - a %  ans );
		cout << ans << " " <<  ans_moves << '\n';
	}
}
int main() {
	optimised();
	testCase()
		FrostMelon();

}
