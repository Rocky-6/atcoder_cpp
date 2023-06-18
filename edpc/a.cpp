#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    int dp[100005];
    for (int i = 0; i <= n; i++) {
        dp[i] = 1e9;
    }
    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);
    for (int i = 1; i < n; i++) {
        dp[i + 1] = min(dp[i] + abs(h[i + 1] - h[i]),
                        dp[i - 1] + abs(h[i + 1] - h[i - 1]));
    }

    cout << dp[n - 1] << endl;

    return 0;
}