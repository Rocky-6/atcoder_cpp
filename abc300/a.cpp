#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> c(n);
    for (auto &v : c) cin >> v;
    for (int i = 0; i < n; i++) {
        if (c[i] == a + b) cout << i + 1 << endl;
    }

    return 0;
}
