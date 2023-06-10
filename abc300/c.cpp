#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector c(h, vector<char>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> c[i][j];
        }
    }
    vector<int> ans(min(h, w) + 1);
    for (int i = 1; i < h - 1; i++) {
        for (int j = 1; j < w - 1; j++) {
            if (c[i][j] == '#') {
                int k = 1;
                bool flag = true;
                while (flag) {
                    for (auto x : {-1, 1}) {
                        for (auto y : {-1, 1}) {
                            if (i + x * k >= h || i + x * k < 0) {
                                flag = false;
                                break;
                            }
                            if (j + y * k >= w || j + y * k < 0) {
                                flag = false;
                                break;
                            }
                            if (c[i + x * k][j + y * k] != '#') flag = false;
                        }
                    }
                    if (!flag) ans[k - 1]++;
                    k++;
                }
            }
        }
    }

    for (int i = 0; i < min(h, w); i++) cout << ans[i + 1] << ' ';

    cout << endl;

    return 0;
}
