#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    string w[100];
    string x[] = {"and", "not", "that", "the", "you"};
    string ans = "No";

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
        for (auto &nx : x){
            if (w[i] == nx) {
                ans = "Yes";
            }
        }
    }

    cout << ans << endl;
    
    return 0;
}
