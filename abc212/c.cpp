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

    int ans = 1e9;
    for (int i = 0; i < n; i++) {
        auto pos = upper_bound(b.begin(), b.end(), a[i]);
        if (pos != b.end()) ans = min(ans, abs(a[i] - (b[pos - b.begin()])));
        if (pos - b.begin() - 1 != -1)
            ans = min(ans, abs(a[i] - (b[pos - b.begin() - 1])));
    }
    cout << ans << endl;

    return 0;
}
