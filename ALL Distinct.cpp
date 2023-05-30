#include<bits/stdc++.h>

/// Define turm
#define nn "\n"
#define ll long long

using namespace std;


void khele_dilam()
{
    int test;   cin >> test;
    
    while(test--){
    int si; cin >> si;

    set<int>ara;

    for(int i=0;i<si;++i){
        int n;  cin >> n;
        ara.insert(n);
    }
    int len = ara.size();
    
    if((len+si)%2!=0){
      len--;
    }
    
    cout << len << nn;
    }

}

int main()
{

    khele_dilam();


}
