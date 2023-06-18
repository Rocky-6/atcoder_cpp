#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> h(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> h[i];
    }

    int dp[100005];
    for (int i = 0; i <= n; i++) {
        dp[i] = 1e9;
    }
    dp[1] = 0;
    for (int i = 2; i <= 1 + k; i++) {
        for (int j = 1; j < i; j++) {
            dp[i] = min(dp[i], dp[j] + abs(h[i] - h[j]));
        }
        if (i == n) {
            cout << dp[n] << endl;
            return 0;
        }
        // cout << i << ':' << dp[i] << endl;
    }

    for (int i = 2 + k; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            dp[i] = min(dp[i], dp[i - j] + abs(h[i] - h[i - j]));
        }
    }
    cout << dp[n] << endl;

    return 0;
}