#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> pa(n);
        for (int i = 0; i < n; i++) {
            int p;
            cin >> p;
            p--;
            pa[i] = pair<int, int>(i, p);
        }

        sort(pa.begin(), pa.end(), [](const auto& lhs, const auto& rhs) {
            return lhs.second < rhs.second;
        });

        int pivot = pa[0].first;
        int ans = 1;
        for (int i = 1; i < n; i++) {
            if (pivot > pa[i].first) continue;
            pivot = pa[i].first;
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}
