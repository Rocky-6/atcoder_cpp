#include <bits/stdc++.h>

using namespace std;

int main() {
    int ax, ay, bx, by, cx, cy, dx, dy;
    cin >> ax >> ay;
    cin >> bx >> by;
    cin >> cx >> cy;
    cin >> dx >> dy;
    bool flag = true;
    if ((bx - ax) * (dy - ay) - (by - ay) * (dx - ax) <= 0) flag = false;
    if ((cx - bx) * (ay - by) - (cy - by) * (ax - bx) <= 0) flag = false;
    if ((dx - cx) * (by - cy) - (dy - cy) * (bx - cx) <= 0) flag = false;
    if ((ax - dx) * (cy - dy) - (ay - dy) * (cx - dx) <= 0) flag = false;

    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
