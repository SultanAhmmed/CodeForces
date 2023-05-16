#include<iostream>
#include<string>
#include<algorithm>

#define nn '\n'                                                        
#define ll long long

using namespace std;

void khelbo(){

	ll n;	cin >> n;

	int k;	cin >> k;
while(k--){
  ll	last_number = n%10;
	
	if(last_number > 0){
		n--;	
	}
	else {
		n/=10;
	}
}
	cout << n << nn;
}
int main()
{
		khelbo();
		return 0;
}
