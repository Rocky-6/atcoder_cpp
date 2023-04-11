#include <iostream>
#include <vector>

using namespace std;
int a[3];

int main() {
    string s;
    cin >> s;

    if ((s[0] != s[1]) && (s[0] != s[2]) && (s[1] == s[2])) {
        cout << s[0] << endl;
        return 0;
    }
    if ((s[0] != s[1]) && (s[0] == s[2]) && (s[1] != s[2])) {
        cout << s[1] << endl;
        return 0;
    }
    if ((s[0] == s[1]) && (s[0] != s[2]) && (s[1] != s[2])) {
        cout << s[2] << endl;
        return 0;
    }
    if ((s[0] != s[1]) && (s[0] != s[2]) && (s[1] != s[2])) {
        cout << s[0] << endl;
        return 0;
    }

    cout << -1 << endl;

    return 0;
}
