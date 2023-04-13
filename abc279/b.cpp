#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    string t;
    cin >> t;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == t[0]) {
            int count = 0;
            for (int j = 0; j < t.length(); j++)
            {
                if (t.length() > s.length()) break;
                if (s[j+i] != t[j]) break;
                count++;
            }
            if (count == t.length()) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    
    return 0;
}
