#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (auto&& nx : A) cin >> nx;
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        int n = r - l + 1;
        vector<int> x(n, 0);
        // cout << "A: ";
        // for (int nx = l; nx <= r; nx++) {
        //     cout << A[nx] << ' ';
        // }
        // cout << endl;
        for (int j = 0; j < n - K + 1; j++) {
            int d = A[l + j] - x[j];
            for (int k = 0; k < K; k++) {
                x[j + k] += d;
            }
            // cout << "x: ";
            // for (auto nx : x) cout << nx << ' ';
            // cout << endl;
        }
        bool ans = true;
        for (int j = 0; j < n; j++) {
            if (A[l + j] != x[j]) ans = false;
        }
        if (ans)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
