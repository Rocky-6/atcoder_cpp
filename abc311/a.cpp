#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> st;
    for (int i = 1; i <= n; i++) {
        st.insert(s[i - 1]);
        if (st.size() == 3) {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}
