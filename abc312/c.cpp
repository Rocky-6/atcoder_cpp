#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ng = 0;
    int ok = 1e9 + 1;
    int ans = 1e9 + 1;
    while (ok - ng > 1) {
        int mid = (ok + ng) / 2;
        int cnta = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] <= mid) cnta++;
        }
        int cntb = 0;
        for (int i = 0; i < m; i++) {
            if (b[i] >= mid) cntb++;
        }
        if (cnta >= cntb) {
            ans = min(ans, mid);
            ok = mid;
        } else
            ng = mid;
    }
    cout << ans << endl;
    return 0;
}
