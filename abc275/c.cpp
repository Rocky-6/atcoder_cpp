#include <bits/stdc++.h>

using namespace std;

int main() {
    set<pair<int, int>> st;
    vector<pair<int, int>> v;
    for (int i = 0; i < 9; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < 9; j++) {
            if (s[j] == '#') {
                st.insert({i, j});
                v.push_back({i, j});
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
            if (i != j) {
                pair<int, int> a = v[i], b = v[j];
                int dx = b.first - a.first;
                int dy = b.second - a.second;
                pair<int, int> c = {b.first - dy, b.second + dx};
                pair<int, int> d = {c.first - dx, c.second - dy};
                if (st.count(c) && st.count(d)) ans++;
            }
        }
    }

    cout << ans / 4 << endl;

    return 0;
}
