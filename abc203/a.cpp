#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    map<int, int> mp;
    mp[a]++;
    mp[b]++;
    mp[c]++;
    if (mp.size() == 3)
        cout << 0 << endl;
    else {
        if (mp[a] != 2)
            cout << a << endl;
        else if (mp[b] != 2)
            cout << b << endl;
        else
            cout << c << endl;
    }
    return 0;
}
