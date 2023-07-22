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
	int n,m;
	cin >> n >> m;
	map<string,string>ipName;

	for(int i = 0;i < n; i++){
		string name,ip;
		cin >> name >> ip;

		ipName[ip] = name; 
	}
	while(m--) {
		string name,ip;
		cin >> name >> ip;

		ip.pop_back();
		cout << name << " " << ip << "; #" << ipName[ip] << '\n';
	}
}


int main() {
	optimised();
	// testCase()
		FrostMelon();
}
