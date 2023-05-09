#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>

#define nn '\n'
#define ll long long
using namespace std;

void solve(){
    string s,ans;   cin >> s;

    // Convert the all string to lower case
    transform(s.begin(), s.end(),s.begin(), ::tolower);
    
    for(int i=0;i<s.size();i++){

        //Skipping all the Vowels
        if(s[i]=='a'||s[i]=='o'||s[i]=='y'||s[i]=='e'||s[i]=='u'||s[i]=='i'){
            continue;
        }

        //Adding the '.' char
        else{
            ans +='.';
            ans +=s[i];
        }
}

cout << ans << nn;
}
int main(){

      solve();
    
}
