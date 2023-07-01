#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

int main() {
    int n;
    cin >> n;
    vector<pair<int, ld>> p(n);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        p[i] = pair<int, ld>(i, (ld)a / (a + b));
    }

    stable_sort(p.begin(), p.end(), [](const auto& lhs, const auto& rhs) {
        return lhs.second > rhs.second;
    });

    for (auto pi : p) cout << pi.first + 1 << ' ';
    cout << endl;

    return 0;
}
