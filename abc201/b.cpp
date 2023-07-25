#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<string, int>> st;
    for (int i = 0; i < n; i++) {
        string s;
        int t;
        cin >> s >> t;
        st.push_back(make_pair(s, t));
    }

    sort(st.begin(), st.end(), [](const auto& lhs, const auto& rhs) {
        return lhs.second > rhs.second;
    });

    cout << st[1].first << endl;
    return 0;
}
