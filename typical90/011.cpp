#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n;
int d[5005], c[5005];
ll s[5005];
ll dp[5005];
bool flag[5005];

ll f(int x) {
    if (flag[x]) return dp[x];
    flag[x] = true;
    ll fans = 0;
    for (int i = 1; i <= n; i++) {
        if (d[i] >= x && x - c[i] >= 0) {
            fans = max(s[i] + f(x - c[i]), f(x - 1));
        }
    }
    dp[x] = fans;
    return dp[x];
}

int main() {
    cin >> n;
    int maxDay = 0;
    for (int i = 1; i <= n; i++) {
        cin >> d[i] >> c[i] >> s[i];
        maxDay = max(maxDay, d[i]);
    }
    cout << f(maxDay) << endl;
    return 0;
}