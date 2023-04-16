#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int x;
    cin >> x;

    vector<bool> dp(x + 1, false);
    vector<bool> available(x + 1, true);
    for (int i = 0; i < m; i++) {
        available[b[i]] = false;
    }

    dp[0] = true;
    for (int i = 1; i <= x; i++) {
        if (!available[i])
            dp[i] = 0;
        else {
            for (int j = 0; j < n; j++) {
                if (i >= a[j]) dp[i] = dp[i] || dp[i - a[j]];
            }
        }
    }

    if (dp[x])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
