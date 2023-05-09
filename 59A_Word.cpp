#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>

#define nn '\n'
#define ll long long
#define dl long double
using namespace std;

void solve(){
    string s;   cin >> s;
    int cont_up =0;
    int cont_lw =0;

    int len = s.size();

    for(int i= 0;i<len;i++){
        if(isupper(s[i])){
            cont_up++;
        }
       
        else{
            cont_lw++;
        }
        
    }


    if(cont_lw>cont_up || cont_lw==cont_up){
        transform(s.begin(),s.end(),s.begin(), :: tolower);
        cout << s <<nn;
    }
    else{
        transform(s.begin(),s.end(),s.begin(), :: toupper);

        cout << s <<nn;
    }



}
int main(){

      solve();
    
}
