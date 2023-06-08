#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    vector<ll> a(n);
    ll x = 1e9 + 1;
    int y;
    for (int i = 0; i < n; i++) {
        cin >> s[i] >> a[i];
        if (min(x, a[i]) == a[i]) {
            x = a[i];
            y = i;
        }
    }
    int j = y;
    for (int i = 0; i < n; i++) {
        cout << s[y] << endl;
        y++;
        if (y == n) y = 0;
    }

    return 0;
}
