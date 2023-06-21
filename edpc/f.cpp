#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    string t;
    cin >> t;

    // int dp[3005][3005];
    vector<vector<int>> dp(3005, vector<int>(3005));
    for (int i = 0; i <= s.size(); i++) {
        for (int j = 0; j <= t.size(); j++) {
            dp[i][j] = -1e5;
        }
    }
    for (int i = 0; i <= t.size(); i++) {
        dp[0][i] = 0;
    }
    for (int i = 0; i < s.size(); i++) {
        dp[i][0] = 0;
    }

    for (int i = 1; i <= s.size(); i++) {
        for (int j = 1; j <= t.size(); j++) {
            if (s[i - 1] == t[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    int len = dp[s.size()][t.size()];
    int i = s.size(), j = t.size();
    vector<char> ans(len);
    while (len > 0) {
        if (s[i - 1] == t[j - 1]) {
            ans[len - 1] = s[i - 1];
            i--;
            j--;
            len--;
        } else if (dp[i][j] == dp[i - 1][j])
            i--;
        else
            j--;
    }

    for (auto c : ans) cout << c;
    cout << endl;

    return 0;
}