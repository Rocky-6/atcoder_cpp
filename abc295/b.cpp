#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<char>> b(r);
    vector<pair<int, int>> ps;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            char x;
            cin >> x;
            b[i].push_back(x);
            if (x >= '1' && x <= '9') ps.push_back({i, j});
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            for (auto& nx : ps) {
                int power = int(b[nx.first][nx.second] - '0');
                if (b[i][j] == '#' && abs(nx.first - i) + abs(nx.second - j) <= power)
                    b[i][j] = '.';
            }
        }
    }

    for (auto& nx : ps) b[nx.first][nx.second] = '.';
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << b[i][j];
        }
        cout << endl;
    }
    
    
    
}