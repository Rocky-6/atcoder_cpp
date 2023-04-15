#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int pre_a, pre_b;
    vector<int> x_a(n, 0), x_b(n, 0);
    x_a[0] = 1;
    x_b[0] = 1;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if (i > 0) {
            if (a != pre_a) {
                x_a[i] += x_a[i - 1];
                x_a[i] %= 998244353;
            }
            if (a != pre_b) {
                x_a[i] += x_b[i - 1];
                x_a[i] %= 998244353;
            }
            if (b != pre_a) {
                x_b[i] += x_a[i - 1];
                x_b[i] %= 998244353;
            }
            if (b != pre_b) {
                x_b[i] += x_b[i - 1];
                x_b[i] %= 998244353;
            }
        }
        pre_a = a;
        pre_b = b;
    }

    cout << (x_a[n - 1] + x_b[n - 1]) % 998244353 << endl;

    return 0;
}
