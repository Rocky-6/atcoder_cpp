#include <iostream>
#include <queue>
#include <vector>

using namespace std;
using ll = long long;

int n;
ll x[3009], y[3009], r[3009];
bool spossible[3009] = {false}, tpossible[3009] = {false};
ll sx, sy, tx, ty;
vector<int> G[3009];
bool dist[3009];

ll nijou(ll x) { return x * x; }

int main() {
    cin >> n;
    cin >> sx >> sy >> tx >> ty;
    for (int i = 1; i <= n; i++) {
        cin >> x[i] >> y[i] >> r[i];
    }
    for (int i = 1; i <= n; i++) {
        if (nijou(sx - x[i]) + nijou(sy - y[i]) == nijou(r[i])) {
            spossible[i] = true;
        }

        if (nijou(tx - x[i]) + nijou(ty - y[i]) == nijou(r[i])) {
            tpossible[i] = true;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((nijou(x[i] - x[j]) + nijou(y[i] - y[j]) <=
                 nijou(r[i] + r[j])) &&
                (nijou(x[i] - x[j]) + nijou(y[i] - y[j]) >=
                 nijou(r[i] - r[j]))) {
                G[i].push_back(j);
                G[j].push_back(i);
            }
        }
    }

    queue<int> que;
    for (int i = 1; i <= n; i++) {
        for (int i = 1; i <= n; i++) dist[i] = false;

        if (spossible[i]) {
            que.push(i);
            while (!que.empty()) {
                int v = que.front();
                que.pop();

                for (int nv : G[v]) {
                    if (dist[nv]) continue;  // すでに発見済みの頂点は探索しない

                    // 新たな白色頂点 nv
                    // について距離情報を更新してキューに追加する
                    dist[nv] = true;
                    if (tpossible[nv]) {
                        cout << "Yes" << endl;
                        return 0;
                    }
                    que.push(nv);
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
