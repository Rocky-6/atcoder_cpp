#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (auto& px : p) cin >> px;
    vector<int> cnt(n);
    for (int i = 0; i < n; i++) {
        int j = (p[i] - i - 1 + n) % n;
        for (int k = 0; k < 3; k++) {
            cnt[(j + k) % n]++;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = max(ans, cnt[i]);
    }
    cout << ans << endl;

    return 0;
}
