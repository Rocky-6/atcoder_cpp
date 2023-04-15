#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n)), b(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    vector<vector<int>> a1(n, vector<int>(n)), a2(n, vector<int>(n)),
        a3(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a1[i][j] = a[n - 1 - j][i];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a2[i][j] = a1[n - 1 - j][i];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a3[i][j] = a2[n - 1 - j][i];
        }
    }
    bool ans = true, ans1 = true, ans2 = true, ans3 = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> b[i][j];
            if (a[i][j] == 1 && a[i][j] != b[i][j]) ans = false;
            if (a1[i][j] == 1 && a1[i][j] != b[i][j]) ans1 = false;
            if (a2[i][j] == 1 && a2[i][j] != b[i][j]) ans2 = false;
            if (a3[i][j] == 1 && a3[i][j] != b[i][j]) ans3 = false;
            if (!ans && !ans1 && !ans2 && !ans3) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;

    return 0;
}
