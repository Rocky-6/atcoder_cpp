#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll k;
    cin >> k;
    ll ans = 0;
    for (ll i = 2; i * i <= k; i++) {
        if (k % i != 0) continue;
        ll a = 0;
        while (k % i == 0) k /= i, a++;
        ll n = 0;
        while (a > 0) {
            n += i;
            ll x = n;
            while (x % i == 0) x /= i, a--;
            ans = max(ans, n);
        }
    }
    ans = max(ans, k);

    cout << ans << endl;
    return 0;
}
