#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int64_t x = abs(x1 - x2), y = abs(y1 - y2);
    if (x == 1 && y == 1)
        cout << "Yes" << endl;
    else if (x == 2 && y == 0)
        cout << "Yes" << endl;
    else if (x == 0 && y == 2)
        cout << "Yes" << endl;
    else if (x == 3 && y == 3)
        cout << "Yes" << endl;
    else if (x == 4 && y == 0)
        cout << "Yes" << endl;
    else if (x == 0 && y == 4)
        cout << "Yes" << endl;
    else if (x == 1 && y == 3)
        cout << "Yes" << endl;
    else if (x == 3 && y == 1)
        cout << "Yes" << endl;
    else if (x == 4 && y == 2)
        cout << "Yes" << endl;
    else if (x == 2 && y == 4)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
