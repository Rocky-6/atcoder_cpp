#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, string> G;
    for (int i = 0; i < n; i++) {
        string s, t;
        cin >> s >> t;
        G[s] = t;
    }

    map<string, bool> seen;
    queue<string> que;

    for (auto itr = G.begin(); itr != G.end(); itr++) {
        if (seen[itr->first]) continue;
        seen[itr->first] = true;
        que.push(itr->first);

        while (!que.empty()) {
            string q = que.front();
            que.pop();
            if (!G.count(q)) break;
            if (!seen[G[q]]) {
                seen[G[q]] = true;
                que.push(G[q]);
            } else {
                if (G[q] != itr->first)
                    break;
                else {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}