#include <iostream>
#define MIN(a, b) a > b ? b : a
using namespace std;
int dp[100001] = { 1, };

int main()
{
	int n;
	int num = 2;
	cin >> n;

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3;
	for (int i = 4; i <= n; i++)
	{
		dp[i] = i;
		if (num * num == i)
		{
			num += 1;
			dp[i] = 1;
		}
		else
		{
			for (int j = 2; j * j <= i; j++)
				dp[i] = MIN(dp[i], dp[i - j * j] + 1);
		}
	}
	printf("%d ", dp[n]);
	return (0);
}
