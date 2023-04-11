#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int INF = 2e9;
int n;
int a[300009];
int q;
int b[300009];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    cin >> q;
    for (int i = 1; i <= q; i++) cin >> b[i];

    sort(a + 1, a + n + 1);

    for (int i = 1; i <= q; i++) {
        int pos = lower_bound(a + 1, a + n + 1, b[i]) - a;
        int diff1 = INF, diff2 = INF;
        if (pos <= n) diff1 = abs(b[i] - a[pos]);
        if (pos >= 2) diff2 = abs(b[i] - a[pos - 1]);
        cout << min(diff1, diff2) << endl;
    }
}
