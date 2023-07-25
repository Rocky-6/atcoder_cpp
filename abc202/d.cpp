#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int a, b;
    ll k;
    cin >> a >> b >> k;
    vector<vector<ll>> c(a + 1, vector<ll>(b + 1));
    for (int i = 0; i <= a; i++) c[i][0] = 1;
    for (int i = 0; i <= b; i++) c[0][i] = 1;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            c[i][j] = c[i - 1][j] + c[i][j - 1];
        }
    }
    string ans;
    while (a + b > 0) {
        if (a == 0) {
            ans += 'b';
            b--;
            continue;
        }
        if (b == 0) {
            ans += 'a';
            a--;
            continue;
        }
        if (c[a - 1][b] >= k) {
            ans += 'a';
            a--;
        } else {
            ans += 'b';
            k -= c[a - 1][b];
            b--;
        }
    }

    cout << ans << endl;

    return 0;
}
