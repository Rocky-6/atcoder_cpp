#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll x, y, z;
    cin >> x >> y >> z;
    string s;
    cin >> s;
    int n = s.size();
    vector<vector<ll>> dp(n + 1, vector<ll>(2));
    dp[0][0] = 0;
    dp[0][1] = z;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'a') {
            dp[i + 1][0] = min(dp[i][0] + x, dp[i][1] + min(y + z, z + x));
            dp[i + 1][1] =
                min(dp[i][0] + min(x + z, z + y), dp[i][1] + min(y, z + x + z));
        }
        if (s[i] == 'A') {
            dp[i + 1][1] = min(dp[i][1] + x, dp[i][0] + min(y + z, z + x));
            dp[i + 1][0] =
                min(dp[i][1] + min(x + z, z + y), dp[i][0] + min(y, z + x + z));
        }
    }
    ll ans;
    if (s[n - 1] == 'a')
        ans = min(dp[n - 1][0] + x, dp[n - 1][1] + min(y, z + x));
    if (s[n - 1] == 'A')
        ans = min(dp[n - 1][1] + x, dp[n - 1][0] + min(y, z + x));
    cout << ans << endl;
    return 0;
}
