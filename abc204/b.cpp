#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > 10)
            a[i] -= 10;
        else
            a[i] = 0;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += a[i];
    }
    cout << ans << endl;
    return 0;
}
