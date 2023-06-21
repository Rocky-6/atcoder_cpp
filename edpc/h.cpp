#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll dp[1005][1005];
bool grid[1005][1005];
ll mod = 1e9 + 7;

int main() {
    int h, w;
    cin >> h >> w;

    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            char a;
            cin >> a;
            if (a == '#')
                grid[i][j] = false;
            else
                grid[i][j] = true;
        }
    }

    for (int i = 0; i <= h; i++) {
        for (int j = 0; j <= w; j++) {
            dp[i][j] = 0;
        }
    }
    dp[1][1] = 1;

    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            if (i == 1 && j == 1) continue;
            if (!grid[i][j]) continue;

            dp[i][j] = (dp[i - 1][j] % mod) + (dp[i][j - 1] % mod);
            dp[i][j] %= mod;
        }
    }
    cout << dp[h][w] << endl;
}