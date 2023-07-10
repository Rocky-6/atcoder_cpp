#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    vector<double> sum(n + 1);
    sum[0] = 0;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        double exp = (double)p[i] * (p[i] + 1) / 2 / p[i];
        sum[i + 1] = sum[i] + exp;
    }

    double M = 0;
    for (int i = k; i <= n; i++) {
        M = max(M, sum[i] - sum[i - k]);
    }

    cout << setprecision(10) << M << endl;
    return 0;
}
