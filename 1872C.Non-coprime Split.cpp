#include<bits/stdc++.h>
using namespace std;
#define int long long 

#define Fast_IO() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
void solve(){
		int a, b;
		cin  >> a >> b;
	
		if( b  - a >= 1 ){
			if( b <= 3 ) {
				cout << "-1" << '\n';
				return;
			}
			else {
				if ( b & 1 ) b--;
				cout << "2" << " " << b - 2 << '\n';
				return;
			}
		}
		else{
			for(int i = 2; i*i<= a; i++){
				if( a % i == 0 ){
					cout <<  i << " " << (a - i) << '\n';
					return;
				}
			}
			cout << "-1" << '\n';
		}
}	

int32_t main(){
		Fast_IO()
		int tc;	cin >> tc;
		while(tc--){
			solve();
		}
}
