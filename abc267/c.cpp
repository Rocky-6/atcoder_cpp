#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (auto& ax : a) cin >> ax;
    ll s = 0, t = 0;
    for (int i = 0; i < m; i++) s += a[i] * (i + 1);
    for (int i = 0; i < m; i++) t += a[i];
    ll ans = s;
    for (int i = 0; i < n - m; i++) {
        ll ns = s - t + m * a[i + m];
        ll nt = t - a[i] + a[i + m];
        s = ns, t = nt;
        ans = max(ans, s);
    }
    cout << ans << endl;
    return 0;
}
