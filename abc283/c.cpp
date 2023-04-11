#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0') {
            if (s[i+1] == '0') {
                ans++; i++;
            } else {
                ans++;
            }
        } else {
            ans++;
        }
    }

    cout << ans << endl;
    
    return 0;
}
