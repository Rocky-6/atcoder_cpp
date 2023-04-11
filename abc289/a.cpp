#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        cout << abs(1 - (s[i] - '0'));
    }
    cout << endl;
    return 0;
}
