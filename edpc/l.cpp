#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll a[3005];
ll dp[3005][3005];
bool flag[3005][3005];

ll f(int l, int r) {
    if (flag[l][r]) return dp[l][r];
    flag[l][r] = true;
    if (l == r) {
        dp[l][r] = a[l];
        return dp[l][r];
    }
    dp[l][r] = max(a[l] - f(l + 1, r), a[r] - f(l, r - 1));
    return dp[l][r];
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cout << f(1, n) << endl;
    return 0;
}