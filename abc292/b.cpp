#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> p(n, 0);

    for (int i = 0; i < q; i++)
    {
        int e, x;
        cin >> e >> x;
        switch (e)
        {
        case 1:
            p[x-1]++;
            break;
        case 2:
            p[x-1] += 2;
            break;
        case 3:
            if (p[x-1] >= 2)
            {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
            break;
        default:
            break;
        }
    }
    
    return 0;
}
