#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& ax : a) cin >> ax;
    for (int i = 0; i < n - 1; i++) {
        cout << a[i] << ' ';
        if (abs(a[i + 1] - a[i]) > 1) {
            if (a[i] > a[i + 1]) {
                for (int j = a[i] - 1; j > a[i + 1]; j--) cout << j << ' ';
            } else {
                for (int j = a[i] + 1; j < a[i + 1]; j++) cout << j << ' ';
            }
        }
    }
    cout << a[n - 1] << endl;
    return 0;
}
