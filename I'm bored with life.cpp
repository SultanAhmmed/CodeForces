#include<bits/stdc++.h>

#define nn '\n'
#define ll long long

using namespace std;


void khele_dilam(){
  
  ll a,b; cin >> a >> b;
  
  ll ans = 1;
  for(int i=1;i<=min(a,b);i++){
    
    ans *=i;
    
  }
  cout << ans << nn;
  
}



int main(){
  
  khele_dilam();
  
}
