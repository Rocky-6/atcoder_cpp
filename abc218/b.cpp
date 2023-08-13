#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 0; i < 26; i++) {
        int p;
        cin >> p;
        cout << (char)('a' + (p - 1));
    }
    cout << endl;
    return 0;
}