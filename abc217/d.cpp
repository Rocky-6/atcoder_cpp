#include <bits/stdc++.h>

using namespace std;

int main() {
    int l, q;
    cin >> l >> q;
    set<int> st;
    st.insert(0);
    st.insert(l);
    while (q--) {
        int c, x;
        cin >> c >> x;
        if (c == 1) st.insert(x);
        if (c == 2) {
            auto itr = st.upper_bound(x);
            int right = *itr;
            itr--;
            int left = *itr;
            cout << right - left << endl;
        }
    }
    return 0;
}
