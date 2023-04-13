#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    cout << s[0] << ' ';
    for (int i = 1; i < n; i++)
    {
        cout << s[i] - s[i-1] << ' ';
    }
    
    cout << endl;
    
    return 0;
}
