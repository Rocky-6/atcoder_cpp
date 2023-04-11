#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<long long> v;
    queue<long long> a, b;
    for (int i = 0; i < n; i++)
    {
        long long ai;
        cin >> ai;
        v.push_back(ai);
        a.push(ai);
    }

    for (int i = 0; i < m; i++)
    {
        long long bi;
        cin >> bi;
        v.push_back(bi);
        b.push(bi);
    }
    
    sort(v.begin(), v.end());
    
    vector<int> ans_a, ans_b;

    int i = 1;
    while (i <= n + m)
    {
        if (v[i-1] == a.front())
        {
            ans_a.push_back(i);
            a.pop();
        } else if (v[i-1] == b.front())
        {
            ans_b.push_back(i);
            b.pop();
        }
        i++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans_a[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < m; i++)
    {
        cout << ans_b[i] << ' ';
    }
    cout << endl;
    
    
    

    return 0;
}
