#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int f = 0, a = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "For") f++;
        else a++;
    }

    if (f > a) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}
