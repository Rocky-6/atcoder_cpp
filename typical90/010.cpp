#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> sum1(n + 1, 0), sum2(n + 1, 0);
    for (int i = 0; i < n; i++) {
        int c, p;
        cin >> c >> p;
        if (c == 1) {
            sum1[i + 1] = sum1[i] + p;
            sum2[i + 1] = sum2[i];
        }
        if (c == 2) {
            sum1[i + 1] = sum1[i];
            sum2[i + 1] = sum2[i] + p;
        }
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        cout << sum1[r] - sum1[l - 1] << ' ' << sum2[r] - sum2[l - 1] << endl;
    }
    return 0;
}