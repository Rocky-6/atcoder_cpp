#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    auto x = s[0];
    for (int i = 1; i < n; i++)
    {
        if (s[i] == x)
        {
            cout << "No" << endl;
            return 0;
        }
        x = s[i];
    }
    
    cout << "Yes" << endl;
    
    return 0;
}
