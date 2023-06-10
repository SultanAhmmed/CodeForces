#include<bits/stdc++.h>

using namespace std;

void solve()
{

    int n,cnt[2]= {0};
    cin >> n;
    for(int i =0; i<2*n; ++i)
    {
        int x;
        cin >> x;
        cnt[x%2]++;
    }
    if(cnt[0]==n)
    {
        cout << "Yes" << '\n';

    }
    else
    {
        cout << "No" << '\n';
    }
}

int main()

{
    int test;
    cin >> test;
    while(test--)
    {
        solve();
    }

    return 0;
}
