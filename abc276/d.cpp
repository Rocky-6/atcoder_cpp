#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int g = 0;
    for (auto& nx : a) {
        cin >> nx;
        g = gcd(g, nx);
    }
    int ans = 0;
    for (auto& nx : a) {
        nx /= g;
        while (nx % 2 == 0) {
            nx /= 2;
            ans++;
        }
        while (nx % 3 == 0) {
            nx /= 3;
            ans++;
        }
        if (nx != 1) {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << ans << endl;
    return 0;
}