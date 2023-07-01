#include <bits/stdc++.h>

using namespace std;

int main() {
    int n[13] = {0};
    for (int i = 0; i < 5; i++) {
        int a;
        cin >> a;
        a--;
        n[a]++;
    }
    int x[6] = {0};
    for (int i = 0; i < 13; i++) {
        x[n[i]]++;
    }

    for (int i = 1; i < 6; i++) {
        if (i == 2 && x[i] != 1) {
            cout << "No" << endl;
            return 0;
        }
        if (i == 3 && x[i] != 1) {
            cout << "No" << endl;
            return 0;
        }
        if (i != 2 && i != 3 && x[i] != 0) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
