#include<iostream>
#include<string>

//#define str "codeforces"
#define nn '\n'
using namespace std;
void solve(){
    string s;   cin >> s;
    int cont=0;
    string str = "codeforces";
    for(int i=0;i<10;i++){
        if(str[i]!=s[i]){
            cont++;
        }
    }
    cout << cont << nn;
}

int main(){
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    
    

}
