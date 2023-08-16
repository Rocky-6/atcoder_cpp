#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;
    cin >> n;
    sort(n.begin(), n.end());
    long long ans = 0;
    do {
        string mae = n.substr(0, n.size() / 2);
        if (mae[0] == '0') continue;
        string usiro = n.substr(n.size() / 2, n.size());
        if (usiro[0] == '0') continue;
        int a = stoi(mae);
        int b = stoi(usiro);
        ans = max(ans, (long long)a * b);
    } while (next_permutation(n.begin(), n.end()));
    cout << ans << endl;
    return 0;
}
