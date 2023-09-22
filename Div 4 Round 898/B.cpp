  /**********************************
        --------------------------
    Bismillahir Rahmanir Rahim
---------------------------

**********************************/
#include <bits/stdc++.h>

using namespace std;

#define eb emplace_back
#define ll  long long
#define all(a)  a.begin(), a.end()

#define Fast_IO() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

template<typename T>
void printList(initializer_list<T> text)
{
  for(const auto &value: text)
    cout << value << " ";
}

/******************************-[FrostMelon]-**************************************/

void solve() {
  int n;
  cin >> n;

  vector<int>ara(n);
  for(auto &u : ara){
    cin >> u;
  }

  sort(all(ara));
  ara[0]++;

  ll ans = 1;
  for(int i = 0; i < n; i++){
    ans *= ara[i];
  }
  cout << ans << '\n';

}

int main() {
  Fast_IO()
  
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++){
      // cout << "Case " << i << ": ";
      solve();
    }
}
