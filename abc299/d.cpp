#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int s;
    map<int, int> mp;

    cout << "? " << 2 << endl;
    cin >> s;
    if (s == 1) {
        cout << "! " << 1 << endl;
        return 0;
    }
    mp[2] = s;

    cout << "? " << n - 1 << endl;
    cin >> s;
    if (s == 0) {
        cout << "! " << n - 1 << endl;
        return 0;
    }
    mp[n - 1] = s;

    int l = 1;
    int r = n - 1;
    while (r >= l) {
        int mid = l + (r - l) / 2;
        cout << "? " << mid << endl;
        cin >> s;
        mp[mid] = s;

        if (mp.find(mid - 1) != mp.end()) {
            if (mp[mid] != mp[mid - 1]) {
                cout << "! " << mid - 1 << endl;
                return 0;
            }
        }
        if (mp.find(mid + 1) != mp.end()) {
            if (mp[mid] != mp[mid + 1]) {
                cout << "! " << mid << endl;
                return 0;
            }
        }
        if (s == 0) l = mid + 1;
        if (s == 1) r = mid - 1;
    }

    return 0;
}
