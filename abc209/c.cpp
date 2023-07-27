#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

int main() {
    int n;
    cin >> n;
    vector<int> c(n);

    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    sort(c.begin(), c.end());
    int minus = 0;
    ll ans = 1;
    for (int i = 0; i < n; i++) {
        ans *= c[i] - minus;
        ans %= mod;
        minus++;
    }
    cout << ans << endl;

    return 0;
}
