#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n >= 1 && n <= 125) cout << 4 << endl;
    if (n >= 126 && n <= 211) cout << 6 << endl;
    if (n >= 212 && n <= 214) cout << 8 << endl;
    return 0;
}
