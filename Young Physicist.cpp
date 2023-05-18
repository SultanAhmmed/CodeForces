#include<iostream>

#define nn '\n'
using namespace std;

void solve(){
    int xsum = 0,ysum = 0,zsum =0;

    int t;  cin  >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >>z;
        xsum +=x;
        ysum +=y;
        zsum +=z;
    }
    
    if(xsum==0&&ysum==0&&zsum==0){
        cout << "YES" << nn;
    }
    else{
        cout << "NO" << nn;
    }
}


int main(){
     solve();

}
