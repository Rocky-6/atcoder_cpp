#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n;
    ll p, q, r;
    cin >> n >> p >> q >> r;
    vector<ll> sums(n + 1);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        sums[i + 1] = sums[i] + a;
    }

    int x, y, z, w;
    bool ans = false;
    for (int i = 0; i < n; i++) {
        x = i;
        y = lower_bound(sums.begin(), sums.end(), sums[x] + p) - sums.begin();
        if (sums[y] - sums[x] != p) continue;
        z = lower_bound(sums.begin(), sums.end(), sums[y] + q) - sums.begin();
        if (sums[z] - sums[y] != q) continue;
        w = lower_bound(sums.begin(), sums.end(), sums[z] + r) - sums.begin();
        if (sums[w] - sums[z] != r) continue;
        ans = true;
    }
    if (ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
