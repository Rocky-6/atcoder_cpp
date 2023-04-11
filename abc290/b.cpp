#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'o' && k > 0)
        {
            cout << 'o';
            k--;
        } else {
            cout << 'x';
        }
    }

    cout << endl;
    
    return 0;
}
