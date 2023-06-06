#include<bits/stdc++.h>

#define endl '\n'
#define ll long long

using namespace std;

void solve()
{
    int temp;
    int n;
    cin >> n;
    while (true) {
        n++;
        temp = n;
        int a = temp % 10;    temp /= 10;
        int b = temp % 10;    temp /= 10;
        int c = temp % 10;    temp /= 10;
        int d = temp;

        if (a != b && a != c && a != d && b != c && b != d && c != d) {
            cout << d << c << b  << a << '\n';
            break;
        }
    }


}

int main()
{
    solve();
    return 0;
}
