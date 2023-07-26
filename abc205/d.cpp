#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n, q;
    cin >> n >> q;
    vector<ll> a(n);
    vector<ll> pa(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pa[i] = a[i] - 1 - i;
    }

    while (q--) {
        ll k;
        cin >> k;
        auto itr = lower_bound(pa.begin(), pa.end(), k);
        int pos = itr - pa.begin();
        if (itr == pa.end()) {
            pos--;
            cout << a[pos] + k - pa[pos] << endl;
        } else
            cout << k + pos << endl;
    }

    return 0;
}
