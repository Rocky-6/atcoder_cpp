#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            char c;
            cin >> c;
            a[i][j] = c == '+' ? 1 : -1;
        }
    }
    vector<vector<bool>> visited(2005, vector<bool>(2005));
    vector<vector<int>> memo(2005, vector<int>(2005));
    /* 自分(今)-相手(次)の最大値を求める */
    auto f = [&](auto f, int i, int j) -> int {
        if (i == h - 1 && j == w - 1) return 0;
        if (visited[i][j]) return memo[i][j];
        visited[i][j] = true;
        int tmp = -1e9;
        if (i + 1 < h) tmp = max(tmp, a[i + 1][j] - f(f, i + 1, j));
        if (j + 1 < w) tmp = max(tmp, a[i][j + 1] - f(f, i, j + 1));
        return memo[i][j] = tmp;
    };

    int score = f(f, 0, 0);
    if (score > 0) cout << "Takahashi" << endl;
    if (score < 0) cout << "Aoki" << endl;
    if (score == 0) cout << "Draw" << endl;

    return 0;
}
