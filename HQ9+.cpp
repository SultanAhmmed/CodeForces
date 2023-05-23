#include<bits/stdc++.h>

#define ll long long
#define nn '\n'

using namespace std;

void khele_Dilam(){
  string s; cin >> s;
  
  int fig = 0;
  
  for(int i = 0;i<s.size();i++){
  
    if(s[i]>=33&&s[i]<=126){
  
      if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        fig = 1;
    }
  }
  
  if(fig ==1){
    cout << "YES" << nn;
  }
  else{
    cout << "NO" << nn;
  }
}



int main(){
  
  khele_Dilam();
  
  return 0;
}
