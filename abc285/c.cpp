#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    long long ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        long long tmp = s[i] - 'A' + 1;
        ans = ans * 26 + tmp;
    }
    cout << ans << endl;
    return 0;
}
