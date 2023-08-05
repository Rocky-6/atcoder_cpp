#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    for (int i = 1; i + 7 < n; i++) {
        for (int j = 1; j + 7 < m; j++) {
            if (s[i][j] != '#') continue;
            bool flag = true;
            for (auto y : {-1, 0, 1}) {
                for (auto x : {-1, 0, 1}) {
                    if (s[i + y][j + x] != '#') flag = false;
                }
            }
            if (!flag) continue;

            for (auto y : {-1, 0, 1, 2}) {
                if (s[i + y][j + 2] != '.') flag = false;
            }
            for (auto x : {-1, 0, 1}) {
                if (s[i + 2][j + x] != '.') flag = false;
            }
            if (!flag) continue;

            for (auto y : {5, 6, 7}) {
                for (auto x : {5, 6, 7}) {
                    if (s[i + y][j + x] != '#') flag = false;
                }
            }
            if (!flag) continue;

            for (auto y : {4, 5, 6, 7}) {
                if (s[i + y][j + 4] != '.') flag = false;
            }
            for (auto x : {5, 6, 7}) {
                if (s[i + 4][j + x] != '.') flag = false;
            }
            if (!flag) continue;
            cout << i << ' ' << j << endl;
        }
    }

    return 0;
}
