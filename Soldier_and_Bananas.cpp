#include<iostream>
#include<cmath>

#define nn '\n'
#define ll long long
#define dl long double
using namespace std;

void solve(){
    ll k,n,w;   cin >> k >> n >> w;
    
    ll total= (w*k*(1+w))/2;

    if(n>=total){
        cout << "0" << nn;
    }
    else{

        cout << total-n << nn;
    }
}
int main(){

      solve();
    
}
