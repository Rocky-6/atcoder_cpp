#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    bool flag[2005][2005] = {{false}};
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    vector<int> r = x, c = y;
    sort(r.begin(), r.end());
    sort(c.begin(), c.end());
    r.erase(unique(r.begin(), r.end()), r.end());
    c.erase(unique(c.begin(), c.end()), c.end());

    for (int i = 0; i < n; i++) {
        int a = lower_bound(r.begin(), r.end(), x[i]) - r.begin();
        int b = lower_bound(c.begin(), c.end(), y[i]) - c.begin();
        flag[a][b] = true;
    }
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (!flag[i][j]) continue;
            for (int k = j + 1; k < n; k++) {
                if (!flag[i][k]) continue;
                for (int l = i + 1; l < n; l++) {
                    if (flag[l][j] && flag[l][k]) ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
