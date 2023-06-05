#include<bits/stdc++.h>

#define endl '\n'
#define ll long long

using namespace std;

void solve()
{

    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;
    while (t--) {
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                ++i;
            }
        }
    }
    cout << s << '\n';

}

int main()
{
    solve();
    return 0;
}
