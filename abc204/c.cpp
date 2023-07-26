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

    int ans = 0;
    for (int i = 0; i < n; i++) {
        vector<bool> seen(n, false);
        queue<int> que;
        seen[i] = true;
        ans++;
        que.push(i);
        while (!que.empty()) {
            int v = que.front();
            que.pop();
            for (int nv : G[v]) {
                if (seen[nv]) continue;
                seen[nv] = true;
                ans++;
                que.push(nv);
            }
        }
    }

    cout << ans << endl;

    return 0;
}
