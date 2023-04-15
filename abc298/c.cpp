#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int q;
    cin >> q;
    vector<vector<int>> box(n + 1);
    vector<set<int>> bst(2e5 + 1);
    for (int k = 0; k < q; k++) {
        int query;
        cin >> query;
        if (query == 1) {
            int i, j;
            cin >> i >> j;
            box[j].push_back(i);
            bst[i].insert(j);
        }
        if (query == 2) {
            int i;
            cin >> i;
            sort(box[i].begin(), box[i].end());
            for (auto x : box[i]) cout << x << ' ';
            cout << endl;
        }
        if (query == 3) {
            int i;
            cin >> i;
            for (auto x : bst[i]) cout << x << ' ';
            cout << endl;
        }
    }

    return 0;
}
