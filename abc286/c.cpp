#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long long a, b;
    string s;
    cin >> n >> a >> b;
    cin >> s;

    s += s;

    long long ans = 1ll << 60;
    for (int i = 0; i < n; i++)
    {
        long long tmp = a * i;
        for (int j = 0; j < n / 2; j++)
        {
            int l = i + j;
            int r = i + n - 1 - j;
            if (s[l] != s[r]) tmp += b;
        }

        ans = min(ans, tmp);
    }
    
    cout << ans << endl;
    
    return 0;
}
