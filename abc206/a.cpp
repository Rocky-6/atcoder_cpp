#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 1.08 * n;
    if (x < 206) cout << "Yay!" << endl;
    if (x == 206) cout << "so-so" << endl;
    if (x > 206) cout << ":(" << endl;
    return 0;
}
