#include <stdio.h>

int max(int a, int b) { return a > b ? a : b; }
int climb_stairs(int n);

int main(void) {
	int n;
	scanf("%d", &n);
	printf("%d", climb_stairs(n));
	return 0;
}

int climb_stairs(int n) {
	int arr[10000], dp[10000];
	for(int i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}
	dp[0] = 0;
	dp[1] = arr[1];
	dp[2] = max(arr[1] + arr[2], arr[2]);
	for(int i = 3; i <= n; i++) {
		dp[i] = max(dp[i - 2] + arr[i], dp[i - 3] + arr[i] + arr[i - 1]);
	}
	return dp[n];
}