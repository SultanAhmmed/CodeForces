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

const int mx = 5e3+123;
int ara[mx];

void FrostMelon() {
	
	map<int ,int>cnt;
	int n;
	cin >> n;
	for(int i = 0;i < n; i++){
		cin >> ara[i];
		cnt[ara[i]]++;
	}
	int ans = 0;
	for(int i = 0; i < n;i++) ans = max(ans,cnt[ara[i]]);
	cout << ans << '\n';
}


int main() {
	optimised();
	// testCase()
		FrostMelon();
}
