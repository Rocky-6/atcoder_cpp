#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<char>> s(n, vector<char>(n)), t(n, vector<char>(n));
    int sleft = n, sright = -1, stop = n, sbottom = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> s[i][j];
            if (s[i][j] == '#') {
                sleft = min(sleft, j);
                sright = max(sright, j);
                stop = min(stop, i);
                sbottom = max(sbottom, i);
            }
        }
    }
    int tleft = n, tright = -1, ttop = n, tbottom = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> t[i][j];
            if (t[i][j] == '#') {
                tleft = min(tleft, j);
                tright = max(tright, j);
                ttop = min(ttop, i);
                tbottom = max(tbottom, i);
            }
        }
    }

    if (sright - sleft == tright - tleft && sbottom - stop == tbottom - ttop) {
        vector<vector<char>> sx(sbottom - stop + 1,
                                vector<char>(sright - sleft + 1));
        for (int i = stop; i <= sbottom; i++) {
            for (int j = sleft; j <= sright; j++) {
                sx[i - stop][j - sleft] = s[i][j];
            }
        }

        vector<vector<char>> tx(tbottom - ttop + 1,
                                vector<char>(tright - tleft + 1)),
            tx180(tbottom - ttop + 1, vector<char>(tright - tleft + 1));
        for (int i = ttop; i <= tbottom; i++) {
            for (int j = tleft; j <= tright; j++) {
                tx[i - ttop][j - tleft] = t[i][j];
                tx180[i - ttop][j - tleft] = t[tbottom - i][tright - j];
            }
        }
        if (sx == tx || sx == tx180) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    if (sright - sleft == tbottom - ttop && sbottom - stop == tright - tleft) {
        vector<vector<char>> sx(sbottom - stop + 1,
                                vector<char>(sright - sleft + 1));
        for (int i = stop; i <= sbottom; i++) {
            for (int j = sleft; j <= sright; j++) {
                sx[i - stop][j - sleft] = s[i][j];
            }
        }

        vector<vector<char>> tx(tright - tleft + 1,
                                vector<char>(tbottom - ttop + 1)),
            tx180(tright - tleft + 1, vector<char>(tbottom - ttop + 1));
        for (int i = tleft; i <= tright; i++) {
            for (int j = ttop; j <= tbottom; j++) {
                tx[i - tleft][j - ttop] = t[tbottom + ttop - j][i];
                tx180[i - tleft][j - ttop] = t[j][tright + tleft - i];
            }
        }

        if (sx == tx || sx == tx180) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
