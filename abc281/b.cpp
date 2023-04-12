#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    bool ans = true;
    if (s[0] < 'A' || s[0] > 'Z') ans = false;
    if (s[1] < '1' || s[1] > '9') ans = false;
    for (int i = 2; i < s.length()-1; i++)
    {
        if (s[i] < '0' || s[i] > '9') ans = false;
    }
    if (s[s.length()-1] < 'A' || s[s.length()-1] > 'Z') ans = false;
    
    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
