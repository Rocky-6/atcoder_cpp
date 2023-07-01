#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll dp[200005][3];
    int n;
    ll l, r;
    cin >> n >> l >> r;
    vector<ll> a(n + 1);
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    vector<ll> diff_l(n + 1, 0), diff_r(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        diff_l[i] = diff_l[i - 1] + l - a[i];
        diff_r[i] = diff_r[i - 1] + r - a[n - i + 1];
        // cout << diff_l[i] << ' ' << diff_r[i] << endl;
    }

    for (int i = 0; i <= n; i++) {
        dp[i][0] = 1e18;
        dp[i][1] = 1e18;
        dp[i][2] = 1e18;
    }
    dp[0][0] = 0;
    dp[0][1] = 0;
    dp[0][2] = 0;

    for (int i = 1; i <= n; i++) {
        dp[i][0] = min(dp[i - 1][0], dp[i - 1][1]);

        dp[i][1] = dp[i - 1][1] + l - a[i];

        dp[i][2] =
            min(min(dp[i - 1][0], dp[i - 1][2]), dp[i - 1][1]) + r - a[i];
    }

    cout << sum + min(dp[n][0], min(dp[n][1], dp[n][2])) << endl;

    return 0;
}
