#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    vector<int> x;
    cin >> n;
    for (int i = 0; i < 5*n; i++)
    {
        int point;
        cin >> point;
        x.push_back(point);
    }

    sort(x.begin(), x.end());

    for (int i = 0; i < n; i++)
    {
        x.pop_back();
    }

    sort(x.begin(), x.end(), [](int a, int b) {
        return a > b;
    });

    for (int i = 0; i < n; i++)
    {
        x.pop_back();
    }
    
    cout << accumulate(x.begin(), x.end(), 0.0) / x.size() << endl;
    
    return 0;
}
