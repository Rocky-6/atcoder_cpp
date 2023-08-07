#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        int ax;
        cin >> ax;
        a[i] = make_pair(i + 1, ax);
    }

    sort(a.begin(), a.end(), [](const auto& lhs, const auto& rhs) {
        return lhs.second < rhs.second;
    });

    cout << a[n - 2].first << endl;

    return 0;
}
