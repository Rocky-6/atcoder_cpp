#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {
    ll n;
    cin >> n;
    while (n < 0) {
        n += 998244353;
    }
    cout << n % 998244353 << endl;
    return 0;
}
