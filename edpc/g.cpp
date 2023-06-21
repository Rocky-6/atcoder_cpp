#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> G(100005);
vector<bool> flag(100005, false);
int dp[100005];

int f(int x) {
    if (flag[x]) return dp[x];
    flag[x] = true;
    int fans = 0;
    for (auto y : G[x]) {
        fans = max(fans, f(y) + 1);
    }
    dp[x] = fans;
    return dp[x];
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        G[x].push_back(y);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = max(ans, f(i));
    }

    cout << ans << endl;

    return 0;
}