#include <bits/stdc++.h>

using namespace std;

int main() {
    map<string, int> mp = {{"ABC", 1}, {"ARC", 1}, {"AGC", 1}, {"AHC", 1}};
    for (int i = 0; i < 3; i++) {
        string s;
        cin >> s;
        mp[s]--;
    }

    for (auto itr = mp.begin(); itr != mp.end(); itr++)
        if (itr->second == 1) cout << itr->first << endl;

    return 0;
}
