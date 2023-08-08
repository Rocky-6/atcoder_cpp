#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    int k = 0;
    while (n >= 2) {
        n /= 2;
        k++;
    }
    cout << k << endl;
    return 0;
}
