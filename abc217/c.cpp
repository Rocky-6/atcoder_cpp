#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> p(n);
    for (int i = 0; i < n; i++) {
        int pi;
        cin >> pi;
        p[i] = make_pair(pi, i);
    }
    sort(p.begin(), p.end());
    for (auto pi : p) cout << pi.second + 1 << ' ';
    cout << endl;
    return 0;
}
