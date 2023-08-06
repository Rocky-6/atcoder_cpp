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
    }

    vector<set<int>> vst(n);

    for (int i = 0; i < n; i++) {
        vector<bool> seen(n);
        queue<int> que;
        if (seen[i]) continue;
        seen[i] = true;
        que.push(i);
        while (!que.empty()) {
            int v = que.front();
            que.pop();
            for (int nv : G[v]) {
                if (seen[nv]) continue;
                seen[nv] = true;
                vst[i].insert(nv);
                que.push(nv);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (vst[i].size() == n - 1) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
