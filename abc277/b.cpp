#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<string> st;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        st.insert(s);
        if (s[0] != 'H' && s[0] != 'D' && s[0] != 'C' && s[0] != 'S') {
            cout << "No" << endl;
            return 0;
        }
        if (s[1] != 'A' && !(s[1] >= '2' && s[1] <= '9') && s[1] != 'T' &&
            s[1] != 'J' && s[1] != 'Q' && s[1] != 'K') {
            cout << "No" << endl;
            return 0;
        }
    }
    if (st.size() != n)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;

    return 0;
}
