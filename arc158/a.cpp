#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        vector<ll> x(3);
        ll sum = 0;
        for (int i = 0; i < 3; i++) {
            cin >> x[i];
            sum += x[i];
        }
        if (sum % 3 != 0) {
            cout << -1 << endl;
            continue;
        }

        sort(x.begin(), x.end());

        if ((x[1] - x[0]) % 2 != 0 || (x[2] - x[1]) % 2 != 0) {
            cout << -1 << endl;
            continue;
        }

        ll ans = 0;
        if (x[1] - x[0] <= x[2] - x[1]) {
            // ll tmp = 0;
            ans += (x[1] - x[0]) / 2;
            ans += (x[2] - ans * 2 - x[1]) / 3;
        } else {
            ans += (x[2] - x[1]) / 2;
            ans += (x[1] - (x[0] + ans * 2)) / 3;
        }
        cout << ans << endl;
    }

    return 0;
}
