#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    ll dp[300005][2];
    vector<ll> x(n), y(n);
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];

    for (int i = 0; i <= n; i++) {
        dp[i][0] = -4e18;
        dp[i][1] = -4e18;
    }
    dp[0][0] = 0;

    for (int i = 0; i < n; i++) {
        if (x[i] == 0)
            dp[i + 1][0] = max(max(dp[i][1], dp[i][0]) + y[i], dp[i][0]);
        else
            dp[i + 1][1] = max(dp[i][0] + y[i], dp[i][1]);

        // cout << i + 1 << endl;
        // cout << dp[i + 1][0] << ' ' << dp[i + 1][1] << endl;

        dp[i + 1][0] = max(dp[i + 1][0], dp[i][0]);
        dp[i + 1][1] = max(dp[i + 1][1], dp[i][1]);
        // cout << dp[i + 1][0] << ' ' << dp[i + 1][1] << endl;
    }

    cout << max(dp[n][0], dp[n][1]) << endl;
    return 0;
}
