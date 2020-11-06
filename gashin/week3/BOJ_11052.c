#include <stdio.h>

int max(int a, int b) { return a > b ? a : b; }

int main() {
  int n, arr[10000], dp[10000];
  scanf("%d", &n);
  for(int i = 1; i <= n; i++) {
    scanf("%d", &arr[i]);
  }
  dp[0] = 0;
  arr[0] = 0;
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= i; j++) {
      dp[i] = max(dp[i], dp[i - j] + arr[j]);
    }
  }
  printf("%d", dp[n]);
}