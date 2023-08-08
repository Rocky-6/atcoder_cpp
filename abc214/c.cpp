#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {
    int n;
    cin >> n;
    vector<ll> s(n), t(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    vector<ll> dp(n);
    for (int i = 0; i < n; i++) {
        dp[(i + 1) % n] = s[i % n] + t[i % n];
    }
    for (int i = 0; i < 2 * n; i++) {
        if (t[(i + 1) % n] < dp[(i + 1) % n]) dp[(i + 1) % n] = t[(i + 1) % n];
    }

    for (int i = 0; i < 2 * n; i++) {
        dp[(i + 1) % n] = min(dp[(i + 1) % n], dp[i % n] + s[i % n]);
    }

    for (int i = 0; i < n; i++) {
        cout << dp[i] << endl;
    }

    return 0;
}
