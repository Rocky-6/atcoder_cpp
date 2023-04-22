#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> flag;
    for (int i = 0; i < n; i++) {
        if (s[i] == '|') flag.push_back(i);
    }

    for (int i = flag[0] + 1; i < flag[1]; i++) {
        if (s[i] == '*') {
            cout << "in" << endl;
            return 0;
        }
    }

    cout << "out" << endl;

    return 0;
}
