#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int ans;
    if (s[0] == 'M') ans = 5;
    if (s[0] == 'T') {
        if (s[1] == 'u')
            ans = 4;
        else
            ans = 2;
    }
    if (s[0] == 'W') ans = 3;
    if (s[0] == 'F') ans = 1;
    cout << ans << endl;
    return 0;
}
