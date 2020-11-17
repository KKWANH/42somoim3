#include	<stdio.h>

int			main(void)
{
	int		max;
	int		n;
	int		arr[1001] = { 0, };
	int		dp[1001]  = { 0, };
	
	scanf("%d", &n);
	for (int i=1; i<=n; i++)
	{
		scanf("%d", &arr[i]);
		dp[i] = arr[i];
	}
	for (int i=1; i<=n; i++)
		for (int j=1; j<i; j++)
			if (arr[j] < arr[i])
				dp[i] = (dp[i] < (dp[j] + arr[i])) ? (dp[j] + arr[i]) : dp[i]; max = -1;
	for (int i=1; i<=n; i++)
		if (max < dp[i])
			max = dp[i];
	printf("%d", max);
}
