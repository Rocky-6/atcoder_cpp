#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    vector<pair<int, int>> ps;
    for (int i = 0; i < h; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (s[i][j] == 's') {
                if (j + 4 < w && s[i][j + 1] == 'n' && s[i][j + 2] == 'u' &&
                    s[i][j + 3] == 'k' && s[i][j + 4] == 'e') {
                    ps.push_back({i, j});
                    ps.push_back({i, j + 1});
                    ps.push_back({i, j + 2});
                    ps.push_back({i, j + 3});
                    ps.push_back({i, j + 4});
                }
                if (j - 4 >= 0 && s[i][j - 1] == 'n' && s[i][j - 2] == 'u' &&
                    s[i][j - 3] == 'k' && s[i][j - 4] == 'e') {
                    ps.push_back({i, j});
                    ps.push_back({i, j - 1});
                    ps.push_back({i, j - 2});
                    ps.push_back({i, j - 3});
                    ps.push_back({i, j - 4});
                }
                if (i - 4 >= 0 && s[i - 1][j] == 'n' && s[i - 2][j] == 'u' &&
                    s[i - 3][j] == 'k' && s[i - 4][j] == 'e') {
                    ps.push_back({i, j});
                    ps.push_back({i - 1, j});
                    ps.push_back({i - 2, j});
                    ps.push_back({i - 3, j});
                    ps.push_back({i - 4, j});
                }
                if (i + 4 < h && s[i + 1][j] == 'n' && s[i + 2][j] == 'u' &&
                    s[i + 3][j] == 'k' && s[i + 4][j] == 'e') {
                    ps.push_back({i, j});
                    ps.push_back({i + 1, j});
                    ps.push_back({i + 2, j});
                    ps.push_back({i + 3, j});
                    ps.push_back({i + 4, j});
                }
                if (i - 4 >= 0 && j - 4 >= 0 && s[i - 1][j - 1] == 'n' &&
                    s[i - 2][j - 2] == 'u' && s[i - 3][j - 3] == 'k' &&
                    s[i - 4][j - 4] == 'e') {
                    ps.push_back({i, j});
                    ps.push_back({i - 1, j - 1});
                    ps.push_back({i - 2, j - 2});
                    ps.push_back({i - 3, j - 3});
                    ps.push_back({i - 4, j - 4});
                }
                if (i + 4 < h && j + 4 < w && s[i + 1][j + 1] == 'n' &&
                    s[i + 2][j + 2] == 'u' && s[i + 3][j + 3] == 'k' &&
                    s[i + 4][j + 4] == 'e') {
                    ps.push_back({i, j});
                    ps.push_back({i + 1, j + 1});
                    ps.push_back({i + 2, j + 2});
                    ps.push_back({i + 3, j + 3});
                    ps.push_back({i + 4, j + 4});
                }
                if (i - 4 >= 0 && j + 4 < w && s[i - 1][j + 1] == 'n' &&
                    s[i - 2][j + 2] == 'u' && s[i - 3][j + 3] == 'k' &&
                    s[i - 4][j + 4] == 'e') {
                    ps.push_back({i, j});
                    ps.push_back({i - 1, j + 1});
                    ps.push_back({i - 2, j + 2});
                    ps.push_back({i - 3, j + 3});
                    ps.push_back({i - 4, j + 4});
                }
                if (i + 4 < h && j - 4 >= 0 && s[i + 1][j - 1] == 'n' &&
                    s[i + 2][j - 2] == 'u' && s[i + 3][j - 3] == 'k' &&
                    s[i + 4][j - 4] == 'e') {
                    ps.push_back({i, j});
                    ps.push_back({i + 1, j - 1});
                    ps.push_back({i + 2, j - 2});
                    ps.push_back({i + 3, j - 3});
                    ps.push_back({i + 4, j - 4});
                }
            }
        }
    }
    for (auto p : ps) cout << p.first + 1 << ' ' << p.second + 1 << endl;
    return 0;
}
