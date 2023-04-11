#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int n;
	cin >> n;

	long long ans = 0;
	for (int i = 1; i <= n; i++)
	{
		int root_ab = int(sqrt(i));
		int root_cd = int(sqrt(n - i));
		int num_ab = 0, num_cd = 0;
		int ab = i, cd = n - i;

		for (int j = 1; j <= root_ab; j++)
		{
			if (ab % j == 0)
			{
				if (ab / j == j)
				{
					num_ab++;
				}
				else
				{
					num_ab += 2;
				}
			}
		}
		for (int j = 1; j <= root_cd; j++)
		{
			if (cd % j == 0)
			{
				if (cd / j == j)
				{
					num_cd++;
				}
				else
				{
					num_cd += 2;
				}
			}
		}

		ans += num_ab * num_cd;
	}

	cout << ans << endl;
	return 0;
}