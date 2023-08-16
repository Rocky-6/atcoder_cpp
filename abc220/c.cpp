#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n), sum(n + 1);
    sum[0] = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum[i + 1] += sum[i] + a[i];
    }
    ll x;
    cin >> x;
    ll ans = 0;
    if (x >= sum[n]) ans += (x / sum[n]) * n;
    x %= sum[n];
    ans += upper_bound(sum.begin(), sum.end(), x) - sum.begin();
    cout << ans << endl;
    return 0;
}
