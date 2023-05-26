#include<bits/stdc++.h>

#define ll long long
#define nn '\n'

using namespace std;

void khele_dilam(){
  
  ll t; cin >> t;
  while(t--){
    ll n,k;  cin >> n>> k;
    int khujo = 0;
    
    if(n%k==0){
      ll n_new =n-1;
      cout << "2" <<nn;
      cout << n_new << " " << (n-n_new)<<nn;
    }
    else{
      cout << "1"<< nn;
      cout << n <<nn;
    }
    
  }
    
}

int main(){

  khele_dilam();
  
}
