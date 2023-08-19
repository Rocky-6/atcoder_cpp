#include <bits/stdc++.h>

using namespace std;

int main() {
    int m;
    cin >> m;
    vector<int> sum(m + 1);
    for (int i = 0; i < m; i++) {
        int d;
        cin >> d;
        sum[i + 1] = sum[i] + d;
    }

    int a = lower_bound(sum.begin(), sum.end(), (sum[m] + 1) / 2) - sum.begin();

    int b = (sum[m] + 1) / 2 - sum[a - 1];

    cout << a << ' ' << b << endl;

    return 0;
}
