#include<bits/stdc++.h>

#define endl '\n'
#define ll long long

using namespace std;

void solve()
{

    string s;
    cin>> s;
    for(int i=0;i<s.length();++i){
        if(s[i]=='.'){
            cout <<"0";
        }
        else if(s[i]=='-'&&s[i+1]=='.')
        {
            cout<<"1";
            ++i;
        }
        else if(s[i]=='-'&&s[i+1]=='-'){
            cout << "2";
            ++i;
        }
    }
    cout << '\n';

}

int main()
{
    solve();
    return 0;
}
