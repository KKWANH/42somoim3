#include <stdio.h>

int continue_sum(int n)
{
    int ans, max;
    int Arr[110000], dp[110000];
    for(int i = 1; i <= n; i++) {
      scanf("%d", &Arr[i]);
    }
    for(int i = 1; i <= n; i++) {
      if(dp[i - 1] + Arr[i] > Arr[i])
        dp[i] = dp[i - 1] + Arr[i];
      else {
        dp[i] = Arr[i];
      }
    }
    max = dp[1];
    for(int i = 2; i <= n; i++) {
      if(max < dp[i]) max = dp[i];
    }
    ans = max;
    return ans;
}
int main() {
  int n;
  scanf("%d", &n);
  printf("%d", continue_sum(n));
  return 0;
}