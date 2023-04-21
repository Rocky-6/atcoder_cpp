#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, vector<int>> G;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    map<int, bool> seen;
    queue<int> que;
    seen[1] = true;
    que.push(1);
    int m = 1;
    while (!que.empty()) {
        int v = que.front();  // キューから先頭頂点を取り出す
        que.pop();
        // v から辿れる頂点をすべて調べる
        for (int nv : G[v]) {
            if (seen[nv]) continue;
            seen[nv] = true;
            que.push(nv);
            m = max(m, nv);
        }
    }

    cout << m << endl;
    return 0;
}
