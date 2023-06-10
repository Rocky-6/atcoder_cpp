#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int h1, w1;
    cin >> h1 >> w1;
    vector<vector<int>> a(h1, vector<int>(w1));
    for (int i = 0; i < h1; i++) {
        for (int j = 0; j < w1; j++) {
            cin >> a[i][j];
        }
    }
    int h2, w2;
    cin >> h2 >> w2;
    vector<vector<int>> b(h2, vector<int>(w2));
    for (int i = 0; i < h2; i++) {
        for (int j = 0; j < w2; j++) {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < (1 << h1); i++) {
        for (int j = 0; j < (1 << w1); j++) {
            vector<int> is, js;
            for (int k = 0; k < h1; k++) {
                if ((i >> k) & 1) is.push_back(k);
            }
            for (int k = 0; k < w1; k++) {
                if ((j >> k) & 1) js.push_back(k);
            }
            if (is.size() != h2) continue;
            if (js.size() != w2) continue;
            vector<vector<int>> c(h2, vector<int>(w2));
            for (int l = 0; l < h2; l++) {
                for (int m = 0; m < w2; m++) {
                    c[l][m] = a[is[l]][js[m]];
                }
            }
            if (b == c) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;

    return 0;
}
