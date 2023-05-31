#include <bits/stdc++.h>

#define nn "\n"

using namespace std;

void khele_dilam()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        transform(s.begin(),s.end(),s.begin(), ::tolower);
        s.erase(unique(s.begin(),s.end()), s.end());
        cout << (s=="meow"?"YES":"NO") << nn;

    }
}

int main()
{
    khele_dilam();
    return 0;
}
