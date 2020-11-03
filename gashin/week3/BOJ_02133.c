#include <stdio.h>

int dp_fill_tile(int n);

int main() {
    int n;
    scanf("%d", &n);
    if(n == 0 || n % 2) {
        printf("0");
        return 0;
    }
    else {
        printf("%d", dp_fill_tile(n));
    }
    return 0;
}

int dp_fill_tile(int n) {
    int dp[31];
    dp[0] = 1;
    dp[2] = 3;
    for(int i = 4; i <= n; i += 2) {
        dp[i] = dp[i - 2] * 3;
        for(int j = 4; i - j >= 0; j += 2) {
            dp[i] += dp[i - j] * 2;
        }
    }
    return (dp[n]);
}