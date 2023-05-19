#include <bits/stdc++.h>

#define nn '\n'

using namespace std;

void kheledialm() {
    string s; cin >> s;
    string ans; cin >> ans;

    reverse(s.begin(),s.end());
    if(s == ans) cout << "YES" << nn;
    else cout << "NO" << nn;
}



int main() {
    kheledialm();
    return 0;
}
