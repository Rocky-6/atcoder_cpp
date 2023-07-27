#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll p;
    cin >> p;
    ll kai[11];
    kai[0] = 1;
    for (ll i = 1; i <= 10; i++) {
        kai[i] = kai[i - 1] * i;
    }
    int ans = 0;
    while (p > 0) {
        ll x;
        for (int i = 1; i < 10; i++) {
            if (kai[i] <= p && kai[i + 1] > p) {
                x = kai[i];
                break;
            }
            if (i == 9) x = kai[i + 1];
        }
        p -= x;
        ans++;
    }
    cout << ans << endl;
    return 0;
}
