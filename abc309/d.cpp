#include <bits/stdc++.h>

using namespace std;

int main() {
    int n1, n2, m;
    cin >> n1 >> n2 >> m;
    vector<vector<int>> G1(n1), G2(n2);
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        if (b <= n1) {
            a--;
            b--;
            G1[a].push_back(b);
            G1[b].push_back(a);
        }
        if (a >= n1 + 1) {
            a -= n1;
            b -= n1;
            a--;
            b--;
            G2[a].push_back(b);
            G2[b].push_back(a);
        }
    }

    vector<int> dist(n1, -1);
    queue<int> que;

    dist[0] = 0;
    que.push(0);
    int maxdist = 0;
    int maxpoint = 0;
    while (!que.empty()) {
        int v = que.front();
        que.pop();

        for (int nv : G1[v]) {
            if (dist[nv] != -1) continue;
            dist[nv] = dist[v] + 1;
            if (maxdist < dist[nv]) {
                maxpoint = nv;
                maxdist = dist[nv];
            }
            que.push(nv);
        }
    }

    int maxdist1 = maxdist;

    dist.assign(n2, -1);

    dist[n2 - 1] = 0;
    que.push(n2 - 1);
    maxdist = 0;
    maxpoint = 0;
    while (!que.empty()) {
        int v = que.front();
        que.pop();

        for (int nv : G2[v]) {
            if (dist[nv] != -1) continue;
            dist[nv] = dist[v] + 1;
            if (maxdist < dist[nv]) {
                maxpoint = nv;
                maxdist = dist[nv];
            }
            que.push(nv);
        }
    }

    int maxdist2 = maxdist;

    cout << maxdist1 + maxdist2 + 1 << endl;

    return 0;
}
