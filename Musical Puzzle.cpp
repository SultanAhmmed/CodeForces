#include <bits/stdc++.h>

#define nn "\n"
#define ll long long

using namespace std;


void REIGN() {

  int test; cin >> test;

  while (test--) {
    int n;  cin >> n;

    string s; cin >> s;
    set<string>str;

    for (int i = 0; i < n-1; i++) {
      string sn = s.substr(i, 2);
      str.insert(sn);
    }

    cout << str.size() << nn;
  }
}

int main()
{
  REIGN();
  return 0;
}
