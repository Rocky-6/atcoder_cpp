#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string ans;
    int depth = 0;
    for (auto c : s) {
        if (c == ')' && depth > 0) {
            while (ans.back() != '(') ans.pop_back();
            ans.pop_back();
            depth--;
            continue;
        }
        if (c == '(') {
            depth++;
            ans.push_back(c);
            continue;
        }
        ans.push_back(c);
    }

    cout << ans << endl;
    return 0;
}
