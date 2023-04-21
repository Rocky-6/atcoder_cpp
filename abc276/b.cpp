#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> G(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    for (int i = 0; i < n; i++) {
        cout << G[i].size() << ' ';
        sort(G[i].begin(), G[i].end());
        for (auto nv : G[i]) cout << nv + 1 << ' ';
        cout << endl;
    }

    return 0;
}
