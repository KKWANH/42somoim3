#include <stdio.h>

int dp_tile_2n(int n) {
	int dp[1001];
	dp[1] = 1;
	dp[2] = 2;
	for(int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
	}
	return (dp[n]);
}

int main(void) {
	int n;
	
	scanf("%d", &n);
	printf("%d", dp_tile_2n(n));
	return 0;
}