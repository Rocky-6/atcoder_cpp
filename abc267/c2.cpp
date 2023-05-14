#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (auto& ax : a) cin >> ax;
    vector<ll> s(n), t(n);
    s[0] = a[0];
    t[0] = a[0];
    for (int i = 1; i < n; i++) {
        s[i] = s[i - 1] + a[i] * (i + 1);
        t[i] = t[i - 1] + a[i];
        // cout << s[i] << ' ' << t[i] << endl;
    }
    ll ans = s[m - 1];
    for (int i = m; i < n; i++) {
        ll tmp = s[i] - (s[i - m] + (t[i] - t[i - m]) * (i - m + 1));
        ans = max(ans, tmp);
    }
    cout << ans << endl;

    return 0;
}
