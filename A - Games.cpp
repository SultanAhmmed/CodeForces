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
	int n;
	cin >> n;

	vector<pair<int,int>>games(n);

	for( auto& u : games ) cin >> u.first >> u.second;

	int cnt = 0;
	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++){
			if(games[i].first == games[j].second)cnt++;
			if(games[i].second == games[j].first)cnt++;
		}	
	}
	cout << cnt << '\n';

}
int main() {
	optimised();
	// testCase()
		FrostMelon();

}
