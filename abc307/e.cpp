#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define MOD 998244353;
ll dp[1000005][2];

int main() {
    int n, m;
    cin >> n >> m;
    dp[1][1] = m;
    for (int i = 1; i < n; i++) {
        dp[i + 1][0] = dp[i][0] * (m - 2) + dp[i][1] * (m - 1);
        dp[i + 1][1] = dp[i][0];
        dp[i + 1][0] %= MOD;
        dp[i + 1][1] %= MOD;
    }

    cout << dp[n][0] << endl;

    return 0;
}
