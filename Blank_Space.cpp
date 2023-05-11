#include <iostream>
#include <string>
#include <vector>
#include<algorithm>


// #define str "codeforces"
#define ll long long
#define nn '\n'
using namespace std;
void debona()
{
    int sz;
    cin >> sz;
    vector<int> vec;

    for (int i = 0; i < sz; i++)
    {
        int n;
        cin >> n;
        vec.push_back(n);
    }
    int cnt = 0;
    int ans = 0;
    for (int i = 0; i < sz; i++)
    {
        if(vec[i]==0){
            cnt++;
        } 
        else{

            ans = max(ans,cnt);
            cnt=0;
        }
        
    }
    cout << max(ans,cnt) << nn;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        debona();
    }
}
