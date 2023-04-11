#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            int a;
            cin >> a;
            if (a == 0)
            {
                cout << '.';
            }
            else {
                cout << char('A' + a - 1);
            }
        }
        cout << endl;
    }
    
    return 0;
}
