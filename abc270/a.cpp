#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    set<int> st;
    if (a == 1 || b == 1) st.insert(1);
    if (a == 2 || b == 2) st.insert(2);
    if (a == 3 || b == 3) {
        st.insert(1);
        st.insert(2);
    }
    if (a == 4 || b == 4) st.insert(4);
    if (a == 5 || b == 5) {
        st.insert(1);
        st.insert(4);
    }
    if (a == 6 || b == 6) {
        st.insert(2);
        st.insert(4);
    }
    if (a == 7 || b == 7) {
        cout << 7 << endl;
        return 0;
    }

    int ans = 0;
    for (auto itr = st.begin(); itr != st.end(); itr++) {
        ans += *itr;
    }
    cout << ans << endl;
    return 0;
}
