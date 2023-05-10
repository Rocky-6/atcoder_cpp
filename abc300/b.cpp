#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> a(h), b(h);
    for (int i = 0; i < h; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < h; i++) {
        cin >> b[i];
        b[i] += b[i];
    }
    bool ans = false;
    for (int i = 0; i < h; i++) {
        auto shift = b[0].find(a[i]);
        if (shift != std::string::npos) {
            ans = true;
            for (int j = 0; j < h; j++) {
                int x = i + j;
                if (x >= h) x -= h;
                auto y = b[j].substr(shift, w);
                if (y != a[x]) ans = false;
            }
        }
        if (ans) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
