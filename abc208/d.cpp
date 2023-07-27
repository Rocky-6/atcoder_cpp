#include <bits/stdc++.h>

using namespace std;
#define INF 1001001001

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> d(n, vector<int>(n, INF));
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        a--;
        b--;
        d[a][b] = c;
    }

    for (int i = 0; i < n; i++) {
        d[i][i] = 0;
    }

    long long ans = 0;
    for (int k = 0; k < n; k++) {
        for (int s = 0; s < n; s++) {
            for (int t = 0; t < n; t++) {
                d[s][t] = min(d[s][t], d[s][k] + d[k][t]);
                if (d[s][t] != INF) ans += d[s][t];
            }
        }
    }
    cout << ans << endl;
    return 0;
}