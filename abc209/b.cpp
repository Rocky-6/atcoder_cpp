#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (i % 2 == 1) a--;
        x -= a;
    }
    if (x >= 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
