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
	
	int n,k;
	cin >> n >> k;
	vector<int>ara(n);
	for(auto& u : ara) cin >> u;

	// sort(ara.begin(),ara.end());
	
	int cnt = 0;
	for(int i = 0; i < n; i++) {
		if(ara[i] > k) cnt +=2;
		else cnt++;
	}
	cout << cnt << '\n';

}


int main() {
	optimised();
	// testCase()
		FrostMelon();
}
