#include <bits/stdc++.h>

using namespace std;

bool dp[100005];

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i <= k; i++) {
        dp[i] = false;
    }

    for (int i = 1; i <= k; i++) {
        for (int j = 1; j <= n; j++) {
            if (i - a[j] >= 0 && !dp[i - a[j]]) dp[i] = true;
        }
    }

    if (dp[k])
        cout << "First" << endl;
    else
        cout << "Second" << endl;
    return 0;
}