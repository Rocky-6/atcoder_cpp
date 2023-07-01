#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n + 1);
    for (int i = 2; i <= n; i++) {
        cin >> p[i];
    }
    int ans = 0;
    int i = n;
    while (i != 1) {
        ans++;
        i = p[i];
    }
    cout << ans << endl;
    return 0;
}
