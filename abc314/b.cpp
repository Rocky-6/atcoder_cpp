#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> c(n);
    vector<set<int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        for (int j = 0; j < c[i]; j++) {
            int aij;
            cin >> aij;
            a[i].insert(aij);
        }
    }

    int x;
    cin >> x;

    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++) {
        if (a[i].count(x) != 0) vp.push_back(make_pair(i, (int)a[i].size()));
    }

    stable_sort(vp.begin(), vp.end(), [](const auto& lhs, const auto& rhs) {
        return lhs.second < rhs.second;
    });

    vector<int> ans;
    for (int i = 0; i < vp.size(); i++) {
        if (i > 0 && vp[i].second != vp[i - 1].second) break;
        ans.push_back(vp[i].first + 1);
    }
    cout << ans.size() << endl;
    for (auto ax : ans) cout << ax << ' ';
    cout << endl;
    return 0;
}
