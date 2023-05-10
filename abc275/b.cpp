#include <bits/stdc++.h>

using namespace std;

int main() {
    long long mod = 998244353;
    long long a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    a %= mod;
    b %= mod;
    c %= mod;
    d %= mod;
    e %= mod;
    f %= mod;
    auto left = (((a * b) % mod) * c) % mod;
    auto right = (((d * e) % mod) * f) % mod;
    long long ans = (left - right) % mod;
    if (ans < 0) ans += mod;
    cout << ans << endl;
    return 0;
}
