#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> G(n);
    vector<bool> red(n), blue(n);
    for (int i = 0; i < m; i++) {
        int a, c;
        char b, d;
        cin >> a >> b >> c >> d;
        a--;
        c--;
        G[a].push_back(c);
        G[c].push_back(a);
        if (b == 'R') red[a] = true;
        if (b == 'B') blue[a] = true;
        if (d == 'R') red[c] = true;
        if (d == 'B') blue[c] = true;
    }

    int x = 0, y = 0;
    vector<bool> seen(n, false);
    for (int i = 0; i < n; i++) {
        if (seen[i]) continue;
        bool can = true;
        queue<int> que;
        seen[i] = true;
        que.push(i);
        while (!que.empty()) {
            int q = que.front();
            que.pop();
            if (!red[q] || !blue[q]) can = false;
            for (int v : G[q]) {
                if (!seen[v]) {
                    que.push(v);
                    seen[v] = true;
                }
            }
        }
        if (can)
            x++;
        else
            y++;
    }

    cout << x << ' ' << y << endl;

    return 0;
}
