#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> t(n), x(n);
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> t[i] >> x[i] >> a[i];
    vector<vector<ll>> dp(t[n - 1] + 1, vector<ll>(5));
    for (int i = 0; i < 5; i++) dp[0][i] = -1;
    dp[0][0] = 0;
    int k = 0;
    for (int i = 1; i <= t[n - 1]; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == 0)
                dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
            else if (j == 4)
                dp[i][4] = max(dp[i - 1][3], dp[i - 1][4]);
            else
                dp[i][j] =
                    max(max(dp[i - 1][j - 1], dp[i - 1][j]), dp[i - 1][j + 1]);

            if (i == t[k]) {
                if (j == x[k] && dp[i][j] != -1) dp[i][j] += a[k];
            }
        }
        if (i == t[k]) k++;
    }
    ll ans = 0;
    for (int i = 0; i < 5; i++) ans = max(ans, dp[t[n - 1]][i]);
    cout << ans << endl;
    /*
        for (int i = 0; i <= t[n - 1]; i++) {
            for (int j = 0; j < 5; j++) {
                cout << dp[i][j] << ' ';
            }
            cout << endl;
        }
    */
    return 0;
}
