#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n), x(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());
    for (int i = 0; i <= n / 2; i++) x[2 * i] = a[i];
    for (int i = 0; i <= n / 2 - 1; i++) x[2 * i + 1] = a[n / 2 + 1 + i];
    for (int i = 1; i < n; i = i + 2) {
        if (x[i] <= x[i - 1] || x[i] <= x[i + 1]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
