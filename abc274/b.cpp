#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<int> row(w, 0);
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            char c;
            cin >> c;
            if (c == '#') row[j]++;
        }
    }

    for (int i = 0; i < w; i++) {
        cout << row[i] << ' ';
    }
    cout << endl;
    return 0;
}
