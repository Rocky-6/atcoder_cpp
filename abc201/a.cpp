#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> a;
    for (int i = 0; i < 3; i++) {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    if (a[1] - a[0] == a[2] - a[1])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
