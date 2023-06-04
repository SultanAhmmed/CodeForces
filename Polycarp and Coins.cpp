#include<bits/stdc++.h>

#define nl '\n'
#define ll long long
using namespace std;



void solve() {

  ll n;  cin >> n;

  ll c1 = n / 3;
  ll c2 = n / 3;

  if (n % 3 == 1) {
    c1++;
  }
  else if (n % 3 == 2) {
    c2++;
  }

  cout << c1 << " " << c2 << nl;

}


int main() {

  int t;  cin >> t;
  while (t--) {
    solve();
  }

}
