#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;
    cin >> n;
    int x = n.size();
    if (x <= 3) {
        cout << n << endl;
        return 0;
    }
    for (int i = 0; i < x - 3; i++) {
        n.pop_back();
    }
    for (int i = 0; i < x - 3; i++) {
        n.push_back('0');
    }
    cout << n << endl;
    return 0;
}
