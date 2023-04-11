#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        st.insert(a);
    }

    if (st.find(0) == st.end()) {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 1; i < k; i++)
    {
        if (st.find(i) == st.end()) {
            cout << i << endl;
            return 0;
        }
    }
    cout << k << endl;
    return 0;
}
