#include <bits/stdc++.h>

using namespace std;

double dp[3005][3005];

int main() {
    int n;
    cin >> n;
    vector<double> p(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            dp[i][j] = 0;
        }
    }

    dp[1][1] = p[1];
    dp[1][0] = 1 - p[1];
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            dp[i][j] = dp[i - 1][j - 1] * p[i] + dp[i - 1][j] * (1 - p[i]);
        }
    }

    double ans = 0;
    int i = n;
    while (i > n / 2) {
        ans += dp[n][i];
        i--;
    }
    cout << setprecision(10) << ans << endl;
}