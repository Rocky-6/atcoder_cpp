#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<char>> c(h, vector<char>(w));
    vector<vector<bool>> seen(h, vector<bool>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> c[i][j];
        }
    }
    map<int, int> ans;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (c[i][j] == '.') continue;
            if (seen[i][j]) continue;
            seen[i][j] = true;
            char x = c[i][j];
            int k = 1;
            while (1) {
                if (i + k == h || j + k == w) break;
                x = c[i + k][j + k];
                if (x == '.') break;
                seen[i + k][j + k] = true;
                k++;
            }
            ans[k / 2]++;
            for (int l = 0; l < k / 2; l++) {
                seen[i + (k / 2) * 2 - l][j + l] = true;
                seen[i + l][j + (k / 2) * 2 - l] = true;
            }
        }
    }
    int a = min(h, w);
    for (int i = 1; i <= min(h, w); i++) {
        cout << ans[i] << ' ';
    }

    cout << endl;
    return 0;
}
