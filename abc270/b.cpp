#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    if (x < 0) {
        x = -x;
        y = -y;
        z = -z;
    }
    int ans;
    if (y < 0 && 0 < x)
        ans = x;
    else if (0 < y && y < x) {
        if (z < y)
            ans = abs(z) + abs(x - z);
        else
            ans = -1;
    }
    cout << ans << endl;
    return 0;
}
