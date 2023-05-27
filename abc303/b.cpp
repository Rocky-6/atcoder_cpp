#include <bits/stdc++.h>

using namespace std;
using p = pair<int, int>;

int main() {
    int n, m;
    cin >> n >> m;
    set<p> st;
    for (int i = 0; i < m; i++) {
        vector<int> a(n);
        for (int j = 0; j < n; j++) cin >> a[j];
        for (int j = 0; j < n - 1; j++)
            st.insert(p(min(a[j], a[j + 1]), max(a[j], a[j + 1])));
    }
    int ans = 0;
    for (int i = 1; i <= n - 1; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (st.count(p(i, j)) == 0) ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
