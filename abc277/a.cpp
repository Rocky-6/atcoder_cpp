#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int ans;
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        if (p == x) ans = i + 1;
    }
    cout << ans << endl;
    return 0;
}