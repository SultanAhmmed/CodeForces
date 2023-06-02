#include <bits/stdc++.h>

#define nn "\n"
#define ll long long

using namespace std;


void REIGN() {

  int test; cin >> test;

  while (test--) {

    int len; 
    cin >> len;
    
    int res = 0;
    
    for(int i=1;i<=len;i++){
      int p_i;  cin >> p_i;
      res = __gcd(res,abs(p_i-i));
    }    
    
    cout << res << nn;
    
  }
}

int main()
{
  ios::sync_with_stdio(false); cin.tie(0);
  REIGN();
  return 0;
}
