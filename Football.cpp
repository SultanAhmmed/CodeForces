#include<iostream>
#include<string>

#define nn '\n'

using namespace std;
int main(){
    int cnt = 1;
    string s;   cin >> s;

    for(int i=0;i<s.length();i++){
        if(s[i]==s[i+1]) {
            cnt++;
            if(cnt==7){
                cout << "YES" <<nn;
                return 0;
            }
        }
        else{
            cnt = 1;
        }
    }
    cout << "NO" << nn;
}
