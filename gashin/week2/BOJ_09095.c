#include <stdio.h>
 
int main(){
  int n, t;
  scanf("%d", &t);
  for(int i = 0; i < t; i++){
    scanf("%d", &n);
    int dp[11];
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for(int i = 4;i <= n; i++)
      dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
      printf("%d\n", dp[n]);
    }
    return 0;
}