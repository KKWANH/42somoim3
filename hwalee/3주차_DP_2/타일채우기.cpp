#include <iostream>
using namespace std;
int dp[31];

int main()
{
	int n;
	cin >> n;
	dp[0] = 1;
	dp[1] = 0;
	dp[2] = 3;
	for (int i = 3; i <= n; i++)
	{
		if (i % 2 == 1)
			dp[i] = 0;
		else
		{
			dp[i] = dp[i - 2] * dp[2];
			for (int j = 4; j <= i; j += 2)
				dp[i] += dp[i - j] * 2;
		}
	}
	printf("%d", dp[n]);
}
