#include<bits/stdc++.h>

#define ll long long
#define nn '\n'


using namespace std;

void khele_dilam(){
  
  ll t; cin >> t;
  while(t--){
    
    int n;  cin >> n;
    string s; cin >> s;
    int ans = 1, cnt= 1;
    
    for(int i=0;i<n;i++){
      if(s[i] != s[i+1]) cnt = 1;
      else cnt++;
      
      ans = max(ans,cnt);
    }
    cout << ans + 1 << nn;
    
    
  }
    
}

int main(){

  khele_dilam();
  
}
