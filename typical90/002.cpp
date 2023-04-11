#include <iostream>
#include <string>

using namespace std;

bool hantei(string s) {
    int dep = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') dep++;
        if (s[i] == ')') dep--;
        if (dep < 0) return false;
    }
    if (dep == 0)
        return true;
    else
        return false;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < (1 << n); i++) {
        string candidate = "";
        for (int j = n - 1; j >= 0; j--) {
            if ((i & (1 << j)) == 0)
                candidate += "(";
            else
                candidate += ")";
        }
        bool I = hantei(candidate);
        if (I == true) cout << candidate << endl;
    }

    return 0;
}
