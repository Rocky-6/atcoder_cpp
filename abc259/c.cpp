#include <iostream>
#include <string>
#include <vector>

using namespace std;
string s, t;

int main() {
    cin >> s;
    cin >> t;
    if (s[0] != t[0]) {
        cout << "No" << endl;
        return 0;
    }
    int j = 1;
    for (int i = 1; i < t.size(); i++) {
        if (t[i] == s[j]) {
            j++;
            continue;
        } else {
            if (s[j - 1] == s[j - 2] && s[j - 1] == t[i]) {
                continue;
            } else {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;

    return 0;
}
