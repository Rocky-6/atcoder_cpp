#include <iostream>
#include <set>

using namespace std;
using p = pair<int, int>;

int main() {
    int n, m, h, k;
    cin >> n >> m >> h >> k;
    string s;
    cin >> s;
    set<pair<int, int>> st;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        st.insert(p(x, y));
    }

    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'R') x++;
        if (s[i] == 'L') x--;
        if (s[i] == 'U') y++;
        if (s[i] == 'D') y--;

        h--;
        if (h < 0) {
            cout << "No" << endl;
            return 0;
        }
        if (h < k) {
            if (st.count(p(x, y)) != 0) {
                h = k;
                st.erase(p(x, y));
            }
        }
    }
    cout << "Yes" << endl;

    return 0;
}
