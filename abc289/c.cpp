#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(m);
    for (int i = 0; i < m; i++)
    {
        int c;
        cin >> c;
        a[i].resize(c);
        for (auto& x : a[i]) cin >> x;
    }
    int ans = 0;
    for (int bit = 0; bit < (1<<m); bit++)
    {
        set<int> st;
        for (int i = 0; i < m; i++)
        {
            if (bit & (1<<i))
            {
                for (auto& x : a[i]) st.insert(x);
            }
        }
        if (st.size() == n) ans++;
    }
    cout << ans << endl;
    
    return 0;
}
