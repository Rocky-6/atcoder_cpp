#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int N;
string S[1 << 18];

int main() {
    cin >> N;

    map<string, int> mp;
    for (int i = 1; i <= N; i++) {
        cin >> S[i];
        if (mp.find(S[i]) != mp.end()) {
            cout << S[i] << '(' << mp.at(S[i]) << ')' << endl;
            mp.at(S[i])++;
        } else {
            cout << S[i] << endl;
            mp.insert(make_pair(S[i], 1));
        }
    }

    return 0;
}
