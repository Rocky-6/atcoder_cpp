#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n + 1), b(n + 1), c(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    ll dp[100005][3];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < 3; j++) {
            dp[i][j] = -1e18;
        }
    }
    dp[1][0] = a[1];
    dp[1][1] = b[1];
    dp[1][2] = c[1];

    for (int i = 1; i < n; i++) {
        dp[i + 1][0] = max(dp[i][1], dp[i][2]) + a[i + 1];
        dp[i + 1][1] = max(dp[i][0], dp[i][2]) + b[i + 1];
        dp[i + 1][2] = max(dp[i][0], dp[i][1]) + c[i + 1];
    }

    cout << max(max(dp[n][0], dp[n][1]), dp[n][2]) << endl;

    return 0;
}