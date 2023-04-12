#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int flag = false;

    for (int i = 0; i < n; i++) {
        if (s[i] == '"' && !flag) flag = true;
        else if (s[i] == '"' && flag) flag = false;
        if (s[i] == ',' && !flag) s[i] = '.';
    }

    cout << s << endl;
    
    return 0;
}
