#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    auto f = [&](long long n) -> double {
        return (double)a / sqrt(n + 1) + (double)b * n;
    };
    long long l = 0, r = a / b;
    while (r - l > 2) {
        long long m1 = (l * 2 + r) / 3;
        long long m2 = (l + r * 2) / 3;
        if (f(m1) > f(m2))
            l = m1;
        else
            r = m2;
    }

    double ans = a;

    for (long long i = l; i <= r; i++) {
        ans = min(ans, f(i));
    }

    cout << fixed << setprecision(10) << ans << endl;

    return 0;
}
