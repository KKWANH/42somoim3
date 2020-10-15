#include <iostream>
using namespace std;

long long DP[1001][10] = { 0, };

int main()
{
	long long res;
	int n;

	cin >> n;
	res = 0;
	for (int i = 0 ; i <= 9 ; i++)
		DP[1][i] = 1;

	for (int i = 2 ; i <= 1000 ; i++)
	{
		for (int j = 0 ; j <= 9 ; j++)
		{
			for (int k = 0 ; k <= j ; k++)
			{
				DP[i][j] += DP[i - 1][k] % 10007;
			}
		}
	}
	for (int i = 0 ; i <= 9 ; i++)
		res += DP[n][i];
	cout << res % 10007 << endl;
	return (0);
}
