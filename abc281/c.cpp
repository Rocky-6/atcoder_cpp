#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long long t;
    cin >> n >> t;
    vector<int> a(n);
    long long pl = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        pl += a[i];
    }

    int m, s;
    long long total = 0;
    int i = 0;
    t %= pl;
    while (total < t)
    {
        s = total;
        total += a[i];
        m = i + 1;
        i++;
        if (i == n) i = 0;
    }
    s = t - s;
    
    cout << m << ' ' << s << endl;
    
    return 0;
}
