#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    stack<string> st;
    set<char> cs;
    st.push("");
    for (char c : s) {
        if (c == '(') {
            st.push("");
        } else if (c == ')') {
            for (char x : st.top()) {
                cs.erase(x);
            }
            st.pop();
        } else {
            if (cs.count(c)) {
                cout << "No" << endl;
                return 0;
            }
            cs.insert(c);
            st.top() += c;
        }
    }
    cout << "Yes" << endl;

    return 0;
}
