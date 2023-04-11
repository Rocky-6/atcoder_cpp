#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    if (n - 1 != m) {
        cout << "No" << endl;
        return 0;
    }

    vector<vector<int>> g(n);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        u--; v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for (int i = 0; i < n; i++)
    {
        if (g[i].size() > 2) {
            cout << "No" << endl;
            return 0;
        }
    }

    vector<bool> seen(n, false);
    queue<int> que;

    seen[0] = true;
    que.push(0);

    while (!que.empty())
    {
        int v = que.front();
        que.pop();

        for (int nv : g[v]) {
            if (seen[nv]) continue;

            seen[nv] = true;
            que.push(nv);
        }
    }

    for (auto v : seen) {
        if (!v) {
            cout << "No" << endl;
            return 0;
        }
    }
    
    cout << "Yes" << endl;
    
    return 0;
}
