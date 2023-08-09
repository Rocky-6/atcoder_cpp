#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<queue<int>> a(m);
    vector<vector<int>> memo(n);
    for (int i = 0; i < m; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int aj;
            cin >> aj;
            aj--;
            a[i].push(aj);
        }
        memo[a[i].front()].push_back(i);
    }

    queue<int> que;
    for (int i = 0; i < n; i++) {
        if (memo[i].size() == 2) que.push(i);
    }

    while (!que.empty()) {
        int now = que.front();
        que.pop();
        for (auto p : memo[now]) {
            a[p].pop();
            if (!a[p].empty()) {
                memo[a[p].front()].push_back(p);
                if (memo[a[p].front()].size() == 2) que.push(a[p].front());
            }
        }
    }
    for (int i = 0; i < m; i++) {
        if (!a[i].empty()) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
