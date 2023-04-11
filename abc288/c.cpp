#include <bits/stdc++.h>

using namespace std;
using Graph = vector<vector<int>>;



int main() {
    int n, m;
    cin >> n >> m;

    Graph G(n);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    
    vector<bool> used(n, false);
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (!used[i]) {
            s++;
            queue<int> que;
            que.push(i);
            while (!que.empty())
            {
                int q = que.front(); que.pop();
                for (int v : G[q]) {
                    if (! used[v])
                    {
                        used[v] = true;
                        que.push(v);
                    }
                    
                }
            }
            
        }
    }
    cout << m - n + s << '\n';
    return 0;
}
