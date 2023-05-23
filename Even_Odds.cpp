#include<iostream>

#define ll long long
#define nn '\n'

using namespace std;

void khele_Dilam(){
  ll n,k,ans;
  
  cin >> n >> k;
  
  if(n%2==0){
    ans = n/2;
  }
  else{
    ans =(n+1)/2; 
  }
  if(k<=ans){
    cout << (k*2)-1;
  }
  else{
    cout << (k-ans)*2;
  }
  
}



int main(){
  
  khele_Dilam();
  
  return 0;
}
