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
	int n; cin >> n;
	map<string,bool>vis;
	while(n--){
		string name;
		cin >> name;

		if(vis[name] == 1) cout << "YES" << '\n';
		else cout << "NO" << "\n";
		vis[name] = 1;
	}
}


int main() {
	optimised();
	// testCase()
		FrostMelon();
}
