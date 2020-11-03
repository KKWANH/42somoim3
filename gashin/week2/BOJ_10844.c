#include <stdio.h>
#define rem 1000000000

int dp_easy_stair(int n) {
	int dp[101][11];
	int sum = 0;
    for (int i = 0; i < 10; i++) {
        dp[1][i] = 1;
    }
    for (int i = 2; i <= n; i++) {
        dp[i][0] = dp[i - 1][1];
        dp[i][10] = 0;
        for (int j = 0; j < 10; j++) {
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % rem;
        }
    }
    for (int i = 1; i < 10; i++) {
        sum = (sum + dp[n][i]) % rem;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", dp_easy_stair(n));
    return 0;
}