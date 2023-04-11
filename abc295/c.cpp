#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<long long, int> m;
    for (int i = 0; i < n; i++)
    {
        long long c;
        cin >> c;
        
        if (m.count(c) == 0)
        {
            m[c] = 1;
        } else {
            m[c]++;
        }
        //cout << m.size() << endl;
    }

    int sum = 0;

    for (auto itr = m.begin(); itr != m.end(); ++itr)
    {
        sum += itr->second / 2;
        //cout << itr->second / 2 << endl;
    }

    cout << sum << endl;
    
    
    return 0;
}
