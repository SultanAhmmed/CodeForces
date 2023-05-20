#include<bits/stdc++.h>

#define nn '\n'
#define ll long long

using namespace std;
int main(){
  
  ll a1,b1,a2,b2;
  cin >> a1 >> b1 >> a2 >> b2;
  if((a2>b1&&b2>b1)||(a2 < a1 && b2 < a1)){
    cout << "-1" << nn;
  }
  else{
    ll maximum = max(a1,a2);
    ll minium = min(b1,b2);
    cout << maximum << " " << minium << nn;
  }
  
}
