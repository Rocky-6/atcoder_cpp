#include <bits/stdc++.h>

using namespace std;
using Graph = vector<vector<int>>;

int main() {
    // 頂点数と辺数
    int N, M; cin >> N >> M;

    // グラフ入力受取 (ここでは無向グラフを想定)
    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    // BFS のためのデータ構造
    vector<int> dist(N, -1); // 全頂点を「未訪問」に初期化
    queue<int> que;
    int ans = 0;

    // BFS 開始 (キューが空になるまで探索を行う)
    for (int i = 0; i < N; i++) {
        if (dist[i] != -1) continue;

        dist[i] = 0;
        que.push(i);
        while (!que.empty()) {
            int v = que.front(); // キューから先頭頂点を取り出す
            que.pop();

            // v から辿れる頂点をすべて調べる
            for (int nv : G[v]) {
                if (dist[nv] != -1) continue; // すでに発見済みの頂点は探索しない

                // 新たな白色頂点 nv について距離情報を更新してキューに追加する
                dist[nv] = 0;
                que.push(nv);
            }
        }
        ans++;
    }
    

    cout << ans << endl;
}