#include <bits/stdc++.h>

using namespace std;

vector<bool> seen, finished;

// サイクル復元のための情報
int pos = -1;     // サイクル中に含まれる頂点 pos
stack<int> hist;  // 訪問履歴

void dfs(const vector<vector<int>>& G, int v, int p) {
    seen[v] = true;
    hist.push(v);
    for (auto nv : G[v]) {
        if (nv == p) continue;  // 逆流を禁止する

        // 完全終了した頂点はスルー
        if (finished[nv]) continue;

        // サイクルを検出
        if (seen[nv] && !finished[nv]) {
            pos = nv;
            return;
        }

        // 再帰的に探索
        dfs(G, nv, v);

        // サイクル検出したならば真っ直ぐに抜けていく
        if (pos != -1) return;
    }
    hist.pop();
    finished[v] = true;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<vector<int>> G(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i]--;
        G[i].push_back(a[i]);
        for (auto nx : G[a[i]]) {
            if (nx == i) {
                cout << 2 << endl;
                cout << i + 1 << ' ' << a[i] + 1 << endl;
                return 0;
            }
        }
    }

    seen.assign(n, false), finished.assign(n, false);
    pos = -1;
    dfs(G, 0, -1);

    stack<int> ans;
    while (!hist.empty()) {
        int t = hist.top();
        ans.push(t + 1);
        hist.pop();
        if (t == pos) break;
    }
    cout << ans.size() << endl;
    while (!ans.empty()) {
        cout << ans.top() << ' ';
        ans.pop();
    }
    cout << endl;
    return 0;
}
