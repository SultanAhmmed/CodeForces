#include<iostream>
#include<string>


#define nn '\n'
#define ll long long
#define MAX 1440

using namespace std;

void solve(){
    int Hours,min;

    cin >> Hours >> min;
    int input_minites = Hours*60+min;

    int actual_min = MAX - input_minites;
    cout << actual_min <<nn;

}
int main(){
    int t;  cin >> t;
    while(t--){
      solve();
    }
}
