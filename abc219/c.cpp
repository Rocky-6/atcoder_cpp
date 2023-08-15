#include <bits/stdc++.h>

using namespace std;

int main() {
    string x;
    cin >> x;
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    std::sort(
        s.begin(), s.end(), [&x](const std::string &a, const std::string &b) {
            // 文字列aとbを新しいアルファベットの順序に基づいて比較
            for (size_t i = 0; i < std::min(a.length(), b.length()); ++i) {
                size_t indexA = x.find(a[i]);
                size_t indexB = x.find(b[i]);
                if (indexA != indexB) {
                    return indexA < indexB;
                }
            }
            return a.length() < b.length();
        });

    for (auto si : s) cout << si << endl;

    return 0;
}
