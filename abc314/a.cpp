#include <bits/stdc++.h>

using namespace std;
using ld = long double;
int main() {
    string pi =
        "141592653589793238462643383279502884197169399375105820974944592307816"
        "4062862089986280348253421170679";

    int n;
    cin >> n;
    cout << "3.";
    for (int i = 0; i < n; i++) {
        cout << pi[i];
    }
    cout << endl;

    return 0;
}
