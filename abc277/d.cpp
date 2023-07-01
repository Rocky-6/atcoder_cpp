#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n;
    ll m;
    cin >> n >> m;
    vector<ll> a(n);
    vector<vector<int>> G(n);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    sort(a.begin(), a.end());
    vector<int> start;

    if ((a[n - 1] + 1 + m) % m == a[0])
        G[n - 1].push_back(0);
    else
        start.push_back(0);

    for (int i = 1; i < n; i++) {
        if (a[i - 1] == a[i] || (a[i - 1] + 1 + m) % m == a[i])
            G[i - 1].push_back(i);
        else
            start.push_back(i);
    }
    if (start.size() == 0) {
        cout << 0 << endl;
        return 0;
    }

    ll max_value = -1;
    vector<bool> seen(n, false);
    for (auto x : start) {
        queue<int> que;
        seen[x] = true;
        que.push(x);
        ll tmp = a[x];
        while (!que.empty()) {
            int v = que.front();  // キューから先頭頂点を取り出す
            que.pop();
            // v から辿れる頂点をすべて調べる
            for (int nv : G[v]) {
                if (seen[nv]) continue;
                seen[nv] = true;
                que.push(nv);
                tmp += a[nv];
            }
        }
        max_value = max(max_value, tmp);
    }

    cout << sum - max_value << endl;
    return 0;
}
