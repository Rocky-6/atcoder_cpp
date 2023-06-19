#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int q;
    cin >> q;
    queue<ll> que;
    que.push(1);
    ll ans = 1;
    vector<ll> y(q + 1);
    y[0] = 1;
    for (int i = 1; i < q; i++) {
        y[i] = y[i - 1] * 10;
        y[i] %= 998244353;
        // cout << y[i] << endl;
    }

    while (q > 0) {
        int query;
        cin >> query;
        if (query == 1) {
            ll x;
            cin >> x;
            que.push(x);
            ans = ans * 10 + x;
            ans %= 998244353;
        } else if (query == 2) {
            ll a = que.front();
            que.pop();
            ans = ans - (a * y[que.size()]) % 998244353 + 998244353;
            ans %= 998244353;
        } else if (query == 3) {
            cout << ans << endl;
        }
        q--;
    }

    return 0;
}