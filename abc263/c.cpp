#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> ans;
    for (int i = 0; i < (1 << m); i++) {
        vector<int> tmp;
        for (int j = 1; j <= m; j++) {
            if (i & 1 << (j - 1)) tmp.push_back(j);
        }
        if (tmp.size() != n)
            continue;
        else
            ans.push_back(tmp);
    }
    sort(ans.begin(), ans.end());

    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < n; j++) {
            cout << ans[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
