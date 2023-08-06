#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    ll ave = sum / n;
    sort(a.begin(), a.end());
    ll ans1;
    ll high1 = ave + 1, low1 = ave;
    ll high = 0, low = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= high1) high += a[i] - high1;
        if (a[i] <= low1) low += low1 - a[i];
    }
    ans1 = max(high, low);

    ll ans2;
    ll high2 = ave, low2 = ave - 1;
    high = 0, low = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= high2) high += a[i] - high2;
        if (a[i] <= low2) low += low2 - a[i];
    }
    ans2 = max(high, low);

    ll ans = min(ans1, ans2);
    cout << ans << endl;

    return 0;
}
