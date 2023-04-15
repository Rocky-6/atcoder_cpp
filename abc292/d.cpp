#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> G(n);
    vector<int> deg(n, 0);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        G[u].push_back(v);
        G[v].push_back(u);
        deg[u]++;
    }

    vector<bool> seen(n, false);
    string ans = "Yes";
    for (int i = 0; i < n; i++) {
        if (seen[i]) continue;
        seen[i] = true;
        queue<int> que;
        que.push(i);
        int ver = 1;
        int degs = 0;
        while (!que.empty()) {
            int q = que.front();
            que.pop();
            degs += deg[q];
            for (auto v : G[q]) {
                if (seen[v]) continue;
                seen[v] = true;
                ver++;
                que.push(v);
            }
        }
        if (degs != ver) ans = "No";
    }

    cout << ans << endl;
    return 0;
}
