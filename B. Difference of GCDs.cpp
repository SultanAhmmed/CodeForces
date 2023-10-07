/**********************************
        --------------------------
    Bismillahir Rahmanir Rahim
---------------------------

**********************************/
#include <bits/stdc++.h>

using namespace std;

#define eb emplace_back
#define pb push_back

#define int	long long
#define uint unsigned long long
#define INT int32_t
#define all(a) 	a.begin(), a.end()
#define sz(x) (int)x.size()
#define sq(a) ((a)*(a))

#define vint vector<int>
#define vs vector<string>
#define pint pair<int,int>
#define vpint vector<pair<int,int>>
#define sint set<int>
#define sstr set<string>
#define vsint vector<set<int>>
#define mint map<int,int>

#define yesno(f) cout << ((f) ? "Yes": "No") << '\n';
#define nl	cout << '\n'
#define sum_ara(a) accumulate(a.begin(), a.end(), 0ll)

#define POINTS() cout << fixed << setprecision(6);
#define Fast_IO() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int mod = 1e9 + 7;
const int eps = 1e-12;
const int maxn = 1e5 + 1;
const int inf = 5e18;
const int minf = -inf;

/******************************-[FrostMelon]-**************************************/
void solve() {
	int n,l,r;
	cin >> n >> l >> r;

	bool ok  = true;
	vint ans(n);
	for(int i = 1; i <= n; i++){
		int x = ( (l + i - 1)/ i) * i;
		if(  x > r  ) {ok = false; break;}
		ans[i - 1] = x;
	}
	yesno(ok);
	if(ok)for(auto a : ans) cout << a << ' ';
	nl;

}		
INT main() {
	Fast_IO()
    int tc = 1;
   	cin >> tc;
    for(int i = 1; i <= tc; i++){
    	// cout << "Case " << i << ": ";
    	solve();
    }
}
