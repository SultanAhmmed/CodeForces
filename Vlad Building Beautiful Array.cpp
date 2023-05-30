#include<bits/stdc++.h>

/// Define term
#define nn "\n"
#define ll long long

using namespace std;


void khele_dilam()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;

        vector<int>ara(n);
        for(auto &i: ara)
        {
            cin >> i;
        }

        bool flag = false;

        for(int i=1; i<n; ++i)
        {
            if(( ara[i]%2 ) != (ara[i-1]%2))
            {
                flag = true;
                break;
            }
        }
        if(flag == false)
        {
            cout << "YES" <<nn;
        }
        else
        {
            int ans = *min_element(ara.begin(),ara.end());

            if(ans %2!=0)
            {
                cout << "YES" << nn;
            }
            else
            {
                cout << "NO" <<nn;
            }

        }

    }

}

int main()
{

    khele_dilam();
    
    return 0;


}
