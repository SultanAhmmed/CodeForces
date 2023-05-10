#include<iostream>
#include<string>

#define nn '\n'
#define ll long long


using namespace std;

void solve(){
    ll n;
    string s;
    cin >> n >> s;
    
    int eights = 0;
    
    for(int i=0;i<n;i++){
        if(s[i]=='8'){
            eights++;
        }
    }
    if(eights>=n/11){
        cout << n/11<<nn;
    }
    else if(eights<n/11&&n>11){
        cout << eights << nn;
    }
    else{
        cout << "0" << nn;
    }
    
}
int main(){
   
      solve();
}
