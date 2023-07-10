#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, w;
    cin >> a >> b >> w;
    w *= 1000;
    int m = 1e9, M = 0;
    for (int i = 1; i <= w; i++) {
        if (a * i <= w && b * i >= w) {
            m = min(m, i);
            M = max(M, i);
        }
    }

    if (M == 0) {
        cout << "UNSATISFIABLE" << endl;
        return 0;
    }

    cout << m << ' ' << M << endl;

    return 0;
}
