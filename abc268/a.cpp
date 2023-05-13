#include <bits/stdc++.h>

using namespace std;

int main() {
    set<int> ae;
    for (int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        ae.insert(x);
    }

    cout << ae.size() << endl;
    return 0;
}
