#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    
    int x = 0, y = 0;
    set<pair<int, int>> st({{x, y}});
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R') x++;
        else if (s[i] == 'L') x--;
        else if (s[i] == 'U') y++;
        else if (s[i] == 'D') y--;
        pair<int,int> p = make_pair(x, y);
        if (st.find(p) != st.end()) {
            cout << "Yes" << endl;
            return 0;
        }
        st.insert(p);
    }
    cout << "No" << endl;
    return 0;
}
