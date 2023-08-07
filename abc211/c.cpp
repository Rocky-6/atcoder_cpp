#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;
    string chokudai = "chokudai";
    ll ans = 0;
    vector<vector<ll>> dp(s.size() + 1, vector<ll>(chokudai.size() + 1, 0));
    for (int i = 0; i <= s.size(); i++) dp[i][0] = 1;
    for (int i = 1; i <= s.size(); i++) {
        for (int j = 1; j <= chokudai.size(); j++) {
            if (s[i - 1] == chokudai[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
                dp[i][j] %= (ll)1e9 + 7;
            } else
                dp[i][j] = dp[i - 1][j];
        }
    }

    cout << dp[s.size()][chokudai.size()] << endl;

    return 0;
}
