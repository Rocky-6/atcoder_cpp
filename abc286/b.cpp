#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
         if (s[i] == 'a' && flag) {
            cout << 'y';
            flag = false;
        }
        
        if (s[i] == 'n') flag = true;
        else flag = false;

        cout << s[i];
    }
    cout << endl;
    return 0;
}
