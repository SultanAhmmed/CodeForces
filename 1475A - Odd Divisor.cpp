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
	ll n;
	cin >> n;
	if( ( n & ( n - 1 ) ) == 0){
		cout  << "No" << '\n'; 
	}
	else cout << "Yes" << '\n';

}
int main() {
	optimised();
	testCase()
		FrostMelon();

}
