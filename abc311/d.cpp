#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> s(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> s[i][j];
        }
    }

    vector<vector<bool>> tootta(n, vector<bool>(m, false)),
        tomatta(n, vector<bool>(m, false));

    tootta[1][1] = true;

    vector<vector<int>> houkou = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    auto dfs = [&](auto dfs, int i, int j) -> void {
        tomatta[i][j] = true;

        for (auto d : houkou) {
            int ii = i, jj = j;
            while (s[ii + d[0]][jj + d[1]] != '#') {
                ii += d[0];
                jj += d[1];
                tootta[ii][jj] = true;
            }
            if (!tomatta[ii][jj]) dfs(dfs, ii, jj);
        }
    };

    dfs(dfs, 1, 1);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (tootta[i][j]) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
