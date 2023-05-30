#include <bits/stdc++.h>

#define nn "\n"

using namespace std;

void khele_dilam() {
    int test;
    cin >> test;
    while (test--) {
        string s;
        cin >> s;
        s = s.substr(0,s.size()/2);
        int k = unique(s.begin(),s.end()) - s.begin();
        cout << (k==1?"NO":"YES")<< nn;

    }
}

int main() {
    khele_dilam();
    return 0;
}
