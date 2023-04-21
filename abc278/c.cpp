#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    map<int, set<int>> G;
    for (int i = 0; i < q; i++) {
        int t, a, b;
        cin >> t >> a >> b;
        if (t == 1) G[a].insert(b);
        if (t == 2) G[a].erase(b);
        if (t == 3) {
            if (G[a].find(b) != G[a].end() && G[b].find(a) != G[b].end())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }

    return 0;
}
