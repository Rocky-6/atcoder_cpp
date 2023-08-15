#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<string> s(3);
    cin >> s[0] >> s[1] >> s[2];
    string t;
    cin >> t;
    for (char tx : t) cout << s[tx - '1'];
    cout << endl;
    return 0;
}
