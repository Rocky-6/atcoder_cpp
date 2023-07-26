#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> t(n);

    bitset<100005> dp;
    dp[0] = 1;
    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> t[i];
        total += t[i];
        dp |= dp << t[i];
    }
    int ans = total;
    for (int i = 0; i <= total; i++) {
        if (dp[i]) ans = min(ans, max(i, total - i));
    }
    cout << ans << endl;

    return 0;
}
