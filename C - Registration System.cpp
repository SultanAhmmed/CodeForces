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
	map<string,int>fre;
	while(n--){
		string name;
		cin >> name;
		
		if(fre[name] == 0) cout << "OK" << '\n';
		else cout << name << fre[name] << '\n';

		fre[name]++; 
	}
}


int main() {
	optimised();
	// testCase()
		FrostMelon();
}
