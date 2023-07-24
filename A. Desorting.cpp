/**********************************
		--------------------------
	Bismillahir Rahmanir Rahim
---------------------------

**********************************/
#include <bits/stdc++.h>

using namespace std;

#define ll 			long long
#define ull 		unsigned long long
#define testCase() 	int t;cin >> t;while(t--)
#define optimised()	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

/******************************-[SnowKingTree]-**************************************/

void FrostMelon() {
	int n;
	cin >> n;
	vector<ll> ara(n);
	for ( auto& u : ara ) cin >> u;

	vector<ll>temp = ara;
	sort(temp.begin(), temp.end());
	if(temp != ara){
		cout << 0 << '\n';
		return;
	}
	else {
		ll min = INT_MAX;
		int ind = 0; 
		for(int i = 1; i < n; i++){
			if(ara[i] - ara[i-1] < min){
				min = ara[i] - ara[i-1];
				ind = i;
			}
		}
		// cout<< ara[ind] << " " << ara[ind - 1] << '\n';
		cout << ((ara[ind]- ara[ind - 1])/2) + 1 << '\n';

	}
	
}


int main() {
	optimised();
	testCase()
		FrostMelon();
}
