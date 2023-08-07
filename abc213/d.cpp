#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> G(n);
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for (int i = 0; i < n; i++) {
        sort(G[i].begin(), G[i].end());
    }

    vector<bool> seen(n, false);
    auto dfs = [&](auto dfs, int v) -> void {
        seen[v] = true;
        cout << v + 1 << ' ';
        for (auto nv : G[v]) {
            if (seen[nv]) continue;
            dfs(dfs, nv);
            cout << v + 1 << ' ';
        }
    };

    dfs(dfs, 0);
    cout << endl;
    return 0;
}
