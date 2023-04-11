#include <bits/stdc++.h>
using namespace std;
using ll = long;

int L1, R1, L2, R2;
bool red[109] = {false}, blue[109] = {false};

int main() {
    cin >> L1 >> R1 >> L2 >> R2;

    for (int i = L1; i <= R1; i++) red[i] = true;
    for (int i = L2; i <= R2; i++) blue[i] = true;

    int length = 0;
    for (int i = 0; i < 101; i++) {
        if (red[i] == true && blue[i] == true) length++;
    }

    if (length > 1)
        cout << length - 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}
