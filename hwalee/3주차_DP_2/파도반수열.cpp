#include <iostream>
using namespace std;
long long dp[101];

int main()
{
	int T, ind;
	int j = 1;
	cin >> T;
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 1;
	dp[4] = 2;
	dp[5] = 2;
	for (int i = 6; i <= 100; i++)
	{
		dp[i] = dp[i - 1] + dp[j];
		j++;
	}
		for (int i = 0; i < T; i++)
	{
		cin >> ind;
		printf("%lld\n", dp[ind]);
	}

}
