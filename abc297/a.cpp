#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    int t;
    cin >> t;
    for (int i = 1; i < n; i++) {
        int tmp;
        cin >> tmp;
        if (tmp - t <= d) {
            cout << tmp << endl;
            return 0;
        }
        t = tmp;
    }
    cout << -1 << endl;
    return 0;
}