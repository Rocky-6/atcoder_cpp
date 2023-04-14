#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans;
    int m = 0;
    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;
        if (m < h) ans = i + 1;
        m = max(m, h);
    }
    cout << ans << endl;
    return 0;
}