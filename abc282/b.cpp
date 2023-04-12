#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            set<int> st;
            for (int k = 0; k < m; k++)
            {
                if (s[i][k] == 'o') st.insert(k);
                if (s[j][k] == 'o') st.insert(k);
            }
            if (st.size() == m) ans++;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
