#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    x--;
    y--;
    vector<vector<int>> G(n);
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    vector<int> ans;
    auto dfs = [&](auto f, int v, int p = -1) -> bool {
        if (v == x) {
            ans.push_back(v);
            return true;
        }
        for (int nv : G[v]) {
            if (nv == p) continue;
            if (f(f, nv, v)) {
                ans.push_back(v);
                return true;
            }
        }
        return false;
    };

    dfs(dfs, y);

    for (auto a : ans) cout << a + 1 << ' ';
    cout << endl;

    return 0;
}
