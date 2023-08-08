#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct UnionFind {
    vector<int> d;
    UnionFind(int n = 0) : d(n, -1) {}
    int find(int x) {
        if (d[x] < 0) return x;
        return d[x] = find(d[x]);
    }
    bool unite(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y) return false;
        if (d[x] > d[y]) swap(x, y);
        d[x] += d[y];
        d[y] = x;
        return true;
    }
    bool same(int x, int y) { return find(x) == find(y); }
    int size(int x) { return -d[find(x)]; }
};

int main() {
    int n;
    cin >> n;

    vector<tuple<int, int, int>> edge(n - 1);
    for (auto& [w, u, v] : edge) {
        cin >> u >> v >> w;
        u--;
        v--;
    }
    sort(edge.begin(), edge.end());

    UnionFind uf(n);
    ll ans = 0;
    for (const auto& [w, u, v] : edge) {
        ans += (ll)w * uf.size(u) * uf.size(v);
        uf.unite(u, v);
    }
    cout << ans << endl;
    return 0;
}
