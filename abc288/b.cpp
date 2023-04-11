#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s[100];

    for (int i = 0; i < n; i++)
    {
        string tmp;
        cin >> tmp;
        if (i >= k) continue;
        s[i] = tmp;
    }

    for (int i = 0; i < k-1; ++i) {
    for (int j = 0; j < k-1; ++j) {
      if (s[j] > s[j+1]) {
        swap(s[j], s[j+1]);
      }
    }
  }
  
  for (int i = 0; i < k; ++i) {
    cout << s[i] << endl;
  }
    
    return 0;
}
