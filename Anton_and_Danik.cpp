#include<bits/stdc++.h>

#define nn '\n'

using namespace std;
void kheledialm(){
  int n;  cin >> n;
  string s; cin >> s;
  int d = count(s.begin(),s.end(),'D');
  int a = count(s.begin(),s.end(),'A');

  if(a>d){
    cout << "Anton" << nn;
  }
  else if(d>a){
    cout << "Danik" << nn;
  }
  else{
    cout << "Friendship" << nn;
  }
}

int main(){

  kheledialm();
  return 0;
}
