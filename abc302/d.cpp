#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {
    int n, m;
    ll d;
    cin >> n >> m >> d;
    vector<ll> a(n), b(m);
    for (auto& ax : a) cin >> ax;
    for (auto& bx : b) cin >> bx;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll ans = -1;
    for (auto ax : a) {
        ll l = ax - d, r = ax + d;
        int j = upper_bound(b.begin(), b.end(), r) - b.begin();
        if (j > 0) {
            ll x = b[j - 1];
            if (l <= x) ans = max(ans, ax + x);
        }
    }
    cout << ans << endl;
    return 0;
}
