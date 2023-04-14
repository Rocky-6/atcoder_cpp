#include <bits/stdc++.h>

using namespace std;

long long INF = 1e18;

int main() {
    long long n, m;
    cin >> n >> m;
    long long ans = INF;
    for (long long a = 1; a <= m / a + 1; a++) {
        long long b = (m + a - 1) / a;
        if (a <= n && b <= n) ans = min(ans, a * b);
    }
    if (ans == INF) ans = -1;

    cout << ans << endl;
    return 0;
}
