#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, w, n;
    cin >> h >> w >> n;
    set<int> cols, rows;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        cols.insert(a[i]);
        rows.insert(b[i]);
    }

    map<int, int> cols_mp, rows_mp;
    int col = 1, row = 1;
    for (auto itr = cols.begin(); itr != cols.end(); itr++) {
        cols_mp[*itr] = col;
        col++;
    }
    for (auto itr = rows.begin(); itr != rows.end(); itr++) {
        rows_mp[*itr] = row;
        row++;
    }

    for (int i = 0; i < n; i++) {
        cout << cols_mp[a[i]] << ' ' << rows_mp[b[i]] << endl;
    }

    return 0;
}
