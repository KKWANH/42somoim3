#include <stdio.h>

int climb_num(int n) {
	int res;
	int dp[1001][10];
	
	for(int i = 0; i < 10; i++) {
		dp[0][i] = 1;
	}
	for(int i = 1; i <= n; i++) {
		dp[i][0] = 1;
		for(int j = 1; j < 10; j++) {
			dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 10007;
		}
	}
	res = dp[n][9];
	return res;
}

int main(void) {
	int n;
	scanf("%d", &n);
	printf("%d", climb_num(n));
	return 0;
}