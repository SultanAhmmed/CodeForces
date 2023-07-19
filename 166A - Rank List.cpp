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
#define gcd(a,b)	 __gcd(a,b)
#define lcm(a,b) 	(a*b)/gcd(a,b)
#define rev(v) 		reverse(v.begin(), v.end())
#define asort(v) 	sort(v.begin(), v.end())
#define forn(a,b)	for(int i = a;i < (b);++i)
#define forR(a,b)	for(int i = a;i < (b);--i)
#define testCase() 	int t;cin >> t;while(t--)
#define optimised()	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

/******************************-[SnowKingTree]-**************************************/

bool cmp(const pair<int,int>&p1,const pair<int,int>&p2){
	if(p1.first > p2.first) return 1;
	else if(p1.first == p2.first) return(p1.second < p2.second);
	return 0;
}

void FrostMelon() {
  
 	int n,k;
 	cin >> n >> k;

 	vector<pair<int,int>>rank_list(n);
 	for(int i = 0;i<n;i++) {
 		cin >> rank_list[i].first >> rank_list[i].second;
 	}

 	sort(rank_list.begin(),rank_list.end(),cmp);
 	int ans =0;
 	for(auto u : rank_list){
 		if(u == rank_list[k-1]) ans++;
 	}
 	cout << ans << '\n';
 
}


int main() {
	optimised();
	// testCase()
		FrostMelon();

}
