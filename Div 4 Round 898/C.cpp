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
  char grid[10][10];
  for(int i = 0; i < 10; i++) for(int j = 0; j < 10; j++){
    cin >> grid[i][j];
  }

  int check = 0;
  int total = 0;
  for(int i = 0; i < 10; i++) for(int j = 0; j < 10; j++){
    if(grid[i][j] == 'X'){
      check = min ({i,j,9-i,9-j});
      total += (check + 1);
    }
  }
  cout << total << '\n';

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
