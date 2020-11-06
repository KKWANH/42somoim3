#include <stdio.h>

unsigned long long dp_pi_num(int n) {
    unsigned long long dp[n + 1];
    dp[1] = 1;
    dp[2] = 1;
    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 2] + dp[i - 1];
    }
    return (dp[n]);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld", dp_pi_num(n));
    return 0;
}