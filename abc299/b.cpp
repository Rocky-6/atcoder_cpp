#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    bool nott = true;
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        if (c[i] == t) nott = false;
    }
    if (nott) t = c[0];

    int ans = -1;
    int num = 0;
    vector<int> r(n);
    for (int i = 0; i < n; i++) {
        cin >> r[i];
        if (c[i] == t && max(ans, r[i]) == r[i]) {
            ans = r[i];
            num = i + 1;
        }
    }

    cout << num << endl;
    return 0;
}
