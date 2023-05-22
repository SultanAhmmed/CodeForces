#include<bits/stdc++.h> 

#define nn '\n'

using namespace std;

void khele_dilam(){
  
  int n; cin >> n;
  
  vector<int>v(n);
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    v.push_back(a);
  }
  
  sort(v.begin(),v.end(),greater<int>());
  
  int sum = 0;
  for(int i=0;i<n;i++){
    sum +=v[i];
  }
  
  int ans=0,cnt=0;
  for(int i =0;i<n;i++){
    if(sum >= ans){
      sum-=v[i];
      ans +=v[i];
      cnt++;
    }
  }
  cout << cnt << nn;
}

int main(){
  khele_dilam();
}
