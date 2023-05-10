#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    vector<bool> clear(n);
    int all;
    for (auto& nx : a) cin >> nx;
    int q;
    cin >> q;
    while (q--) {
        int query;
        cin >> query;
        if (query == 1) {
            int x;
            cin >> x;
            all = x;
            clear.assign(n, true);
        }
        if (query == 2) {
            int i, x;
            cin >> i >> x;
            i--;
            if (clear[i]) {
                a[i] = all + x;
                clear[i] = false;
            } else {
                a[i] += x;
            }
        }
        if (query == 3) {
            int i;
            cin >> i;
            i--;
            if (clear[i])
                cout << all << endl;
            else
                cout << a[i] << endl;
        }
    }

    return 0;
}
