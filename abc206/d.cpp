#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i];
    }
    vector<vector<int>> G(200005);
    for (int i = 0; i < n; i++) {
        if (a[i] != a[n - 1 - i]) {
            G[a[i]].push_back(a[n - 1 - i]);
            G[a[n - 1 - i]].push_back(a[i]);
        }
    }

    int ans = 0;
    vector<bool> seen(200005, false);
    for (int i = 0; i < 200005; i++) {
        queue<int> que;
        seen[i] = true;
        que.push(i);
        while (!que.empty()) {
            int v = que.front();
            que.pop();
            for (int nv : G[v]) {
                if (seen[nv]) continue;
                seen[nv] = true;
                ans++;
                que.push(nv);
            }
        }
    }

    cout << ans << endl;

    return 0;
}
