#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    set<pair<string, string>> st;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string si, ti;
        cin >> si >> ti;
        if (st.count(make_pair(si, ti)) != 0) {
            cout << "Yes" << endl;
            return 0;
        }
        st.insert(make_pair(si, ti));
    }
    cout << "No" << endl;
    return 0;
}
