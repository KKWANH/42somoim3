#include<stdio.h>

int min(int a, int b){ return a < b ? a : b; }
int squared_sum(int n) {
    int dp[110000];
	for (int i = 0; i <= n; i++) {
        dp[i] = i;
    }
	for (int i = 2; i <= n; i++) {
		for (int j = 2; j*j <= i; j++) {
			dp[i] = min(dp[i], dp[i - j*j] + 1);
        }
    }
	return dp[n];
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", squared_sum(n));
    return 0;
}