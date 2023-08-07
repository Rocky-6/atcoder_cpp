#include <bits/stdc++.h>

using namespace std;
using ll = long long;

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
    vector<ll> cnt(n, 0);
    vector<int> dist(n, -1);
    queue<int> que;
    dist[0] = 0;
    que.push(0);
    cnt[0] = 1;
    while (!que.empty()) {
        int v = que.front();
        que.pop();
        for (int nv : G[v]) {
            if (dist[nv] == dist[v] + 1) {
                cnt[nv] += cnt[v];
                cnt[nv] %= (ll)1e9 + 7;
                continue;
            } else if (dist[nv] == -1) {
                dist[nv] = dist[v] + 1;
                cnt[nv] = cnt[v];
                que.push(nv);
            }
        }
    }
    cout << cnt[n - 1] << endl;
    return 0;
}
