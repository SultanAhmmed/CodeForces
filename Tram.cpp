#include <bits/stdc++.h>

#define nn '\n'

using namespace std;

void kheledialm() {
    int t;
    cin >> t;

    int pass = 0, maximum = 0;

    while (t--) {
        pair<int, int> p;

        cin >> p.first >> p.second;

        pass -= p.first;
        pass += p.second;

        if (pass > maximum)
            maximum = pass;
    }

    cout << maximum << nn;
}

int main() {
    kheledialm();
    return 0;
}
