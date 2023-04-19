#include <bits/stdc++.h>

using namespace std;

bool dp[2505][10105];

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> coin;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        for (int j = 0; j < b; j++) coin.push_back(a);
    }

    dp[0][0] = true;
    for (int i = 0; i <= coin.size(); i++) {
        for (int j = 0; j <= x; j++) {
            if (!dp[i][j]) continue;
            dp[i + 1][j] = true;
            dp[i + 1][j + coin[i]] = true;
        }
    }

    if (dp[coin.size()][x])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
