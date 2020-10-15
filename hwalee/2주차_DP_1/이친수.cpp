#include <iostream>
using namespace std;

unsigned long long DP[91][2] = { 0, };

int main()
{
	int n;
	unsigned long long res = 0;

	cin >> n;
	DP[1][1] = 1;
	DP[1][0] = 0;
	for (int i = 2; i <= 91; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (j == 0)
			{
				if (i == 2)
					DP[i][j] += DP[i - 1][1];
				else
					DP[i][j] = DP[i - 1][0] + DP[i - 1][1];
			}
			else
				if (i != 2)
					DP[i][j] = DP[i - 1][0];
		}
	}
	res = DP[n][0] + DP[n][1];
	cout << res;
	return (0);
}
