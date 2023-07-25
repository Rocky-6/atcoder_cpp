#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[805][805], s[805][805];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        s[i][0] = 0;
        s[0][i] = 0;
    }

    int l = k * k / 2 + 1;

    int ng = -1;
    int ok = 1e9;

    while (ok - ng > 1) {
        int mid = (ok + ng) / 2;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                s[i + 1][j + 1] = s[i][j + 1] + s[i + 1][j] - s[i][j];
                if (a[i][j] > mid) s[i + 1][j + 1]++;
            }
        }

        bool ext = false;
        for (int i = 0; i < n - k + 1; i++) {
            for (int j = 0; j < n - k + 1; j++) {
                if (s[i + k][j + k] + s[i][j] - s[i + k][j] - s[i][j + k] < l)
                    ext = true;
            }
        }

        if (ext)
            ok = mid;
        else
            ng = mid;
    }

    cout << ok << endl;

    return 0;
}
