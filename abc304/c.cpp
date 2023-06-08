#include <bits/stdc++.h>

using namespace std;

float kyori(pair<int, int> p1, pair<int, int> p2) {
    auto n = sqrt((p1.first - p2.first) * (p1.first - p2.first) +
                  (p1.second - p2.second) * (p1.second - p2.second));
    return n;
}

int main() {
    int n, d;
    cin >> n >> d;
    vector<pair<int, int>> p(n);
    vector<vector<int>> G(n);
    for (int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (kyori(p[i], p[j]) <= d) {
                G[i].push_back(j);
                G[j].push_back(i);
            }
        }
    }

    vector<bool> seen(n, false);
    queue<int> que;
    seen[0] = true;
    que.push(0);
    while (!que.empty()) {
        int v = que.front();  // キューから先頭頂点を取り出す
        que.pop();
        for (int nv : G[v]) {
            if (seen[nv]) continue;
            seen[nv] = true;
            que.push(nv);
        }
    }
    for (int i = 0; i < n; i++) {
        if (seen[i])
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
