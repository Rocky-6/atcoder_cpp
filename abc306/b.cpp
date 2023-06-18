#include <bits/stdc++.h>

using namespace std;
using ll = unsigned long long;

int main() {
    ll two[64];
    two[0] = 1;
    for (ll i = 1; i < 64; i++) {
        two[i] = two[i - 1] * 2;
    }

    ll ans = 0;
    for (ll i = 0; i < 64; i++) {
        ll a;
        cin >> a;
        ans += a * two[i];
    }

    cout << ans << endl;

    return 0;
}
