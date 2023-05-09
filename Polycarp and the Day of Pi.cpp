#include <bits/stdc++.h>
#define endl "\n"
#define endl "\n"
#define ll long long

using namespace std;

string PI = "31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
void khelbo(){
	ll cnt=0;
	string s;
	cin >> s;
	if(s[0]==0){
		cout << "0" <<endl;
		return ;
	}
	for(ll i=0;i<s.length();++i){
	if(s[i]==PI[i]){
		cnt++;
	}
	else{
		break;
	}
	}
	cout<<cnt<<endl;
}

int main()
{
	int t;
	cin>> t;
	while(t--){
	khelbo();
}
	return 0;
}
