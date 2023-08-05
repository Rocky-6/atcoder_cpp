#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    auto chord = {"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};
    for (auto c : chord) {
        if (c == s) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
