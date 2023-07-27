#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<vector<int>> G(n);
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    queue<int> que;
    vector<bool> seen(n), odd(n);
    que.push(0);
    seen[0] = true;
    odd[0] = true;
    while (!que.empty()) {
        int v = que.front();
        que.pop();
        for (auto nv : G[v]) {
            if (seen[nv]) continue;
            seen[nv] = true;
            odd[nv] = !odd[v];
            que.push(nv);
        }
    }

    for (int i = 0; i < q; i++) {
        int c, d;
        cin >> c >> d;
        c--;
        d--;
        if (odd[c] == odd[d])
            cout << "Town" << endl;
        else
            cout << "Road" << endl;
    }

    return 0;
}
