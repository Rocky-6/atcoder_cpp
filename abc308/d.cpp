#include <bits/stdc++.h>

using namespace std;

bool snuke(char now, char next) {
    if (now == 's' && next == 'n') return true;
    if (now == 'n' && next == 'u') return true;
    if (now == 'u' && next == 'k') return true;
    if (now == 'k' && next == 'e') return true;
    if (now == 'e' && next == 's') return true;
    return false;
}

int main() {
    int h, w;
    cin >> h >> w;
    char str[] = {'s', 'n', 'u', 'k', 'e'};
    char s[505][505] = {{'0'}};
    map<pair<int, int>, vector<pair<int, int>>> G;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            cin >> s[i][j];
        }
    }
    if (s[1][1] != 's') {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            if (snuke(s[i][j], s[i - 1][j]))
                G[pair(i, j)].push_back(pair(i - 1, j));
            if (snuke(s[i][j], s[i + 1][j]))
                G[pair(i, j)].push_back(pair(i + 1, j));
            if (snuke(s[i][j], s[i][j - 1]))
                G[pair(i, j)].push_back(pair(i, j - 1));
            if (snuke(s[i][j], s[i][j + 1]))
                G[pair(i, j)].push_back(pair(i, j + 1));
        }
    }

    map<pair<int, int>, bool> seen;
    queue<pair<int, int>> que;
    seen[pair(1, 1)] = true;
    que.push(pair(1, 1));
    while (!que.empty()) {
        auto v = que.front();  // キューから先頭頂点を取り出す
        que.pop();
        // v から辿れる頂点をすべて調べる
        if (v == pair(h, w)) {
            cout << "Yes" << endl;
            return 0;
        }
        for (auto nv : G[v]) {
            if (seen[nv]) continue;
            seen[nv] = true;
            que.push(nv);
            if (nv == pair(h, w)) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
