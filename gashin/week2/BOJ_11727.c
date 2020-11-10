#include <stdio.h>

int dp_tile_2n_2(int n) {
    int dp[1001];
    dp[1] = 1;
    dp[2] = 3;
    for(int i = 3; i <= n; i++) {
        dp[i] = (dp[i - 1] + (dp[i - 2] * 2)) % 10007;
    }
    return (dp[n]);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", dp_tile_2n_2(n));
    return 0;
}