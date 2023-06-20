#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int N, W;
    cin >> N >> W;
    vector<ll> w(N + 1), v(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> w[i] >> v[i];
    }

    vector<vector<ll>> dp(N + 1, vector<ll>(1e5 + 5, 1e18));
    dp[0][0] = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= 1e5; j++) {
            if (j - v[i] >= 0)
                dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - v[i]] + w[i]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    int ans = 1e5;
    while (dp[N][ans] > W) ans--;

    cout << ans << endl;

    return 0;
}