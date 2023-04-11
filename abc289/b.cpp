#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<bool> x(101, false);

    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        x[a] = true;
    }
    stack<int> st;
    for (int i = 1; i <= n; i++)
    {
        if (x[i]) {
            st.push(i);
        } else {
            cout << i << ' ';
            while (!st.empty())
            {
                cout << st.top() << ' ';
                st.pop();
            }
        }
    }
    
    cout << endl;
    

    return 0;
}
