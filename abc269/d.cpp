#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<pair<int, int>> xy;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        xy.emplace(x, y);
    }

    map<pair<int, int>, set<pair<int, int>>> G;
    for (auto itr = xy.begin(); itr != xy.end(); itr++) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (i == 0 && j == 2) continue;
                if (i == 1 && j == 1) continue;
                if (i == 2 && j == 0) continue;

                auto ij = make_pair(itr->first + i - 1, itr->second + j - 1);
                if (xy.count(ij) != 0) {
                    G[*itr].insert(ij);
                    G[ij].insert(*itr);
                }
            }
        }
    }

    int ans = 0;
    map<pair<int, int>, bool> seen;
    queue<pair<int, int>> que;
    for (auto itr = xy.begin(); itr != xy.end(); itr++) {
        if (seen[*itr]) continue;
        seen[*itr] = true;
        que.push(*itr);
        while (!que.empty()) {
            auto v = que.front();
            que.pop();
            for (auto nv : G[v]) {
                if (seen[nv]) continue;
                seen[nv] = true;
                que.push(nv);
            }
        }
        ans++;
    }

    cout << ans << endl;
    return 0;
}
