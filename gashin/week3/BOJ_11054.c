#include <stdio.h>

int DP_bytonic(int n)
{
    int ans;
    int Arr[1001], dp_l[1001], dp_r[1001];
    for (int i = 1; i <= n; i++) {
      scanf("%d", &Arr[i]);
    }
    for(int i = 1; i <= n; i++) {
        dp_l[i] = 1;
        for (int j = 1; j <= i; j++) {
            if (Arr[j] < Arr[i] && dp_l[i] < dp_l[j] + 1)
                dp_l[i] = dp_l[j] + 1;
        }
    }
    for(int i = n; i >= 1; i--) {
        dp_r[i] = 1;
        for (int j = n; j >= i; j--) {
            if (Arr[i] > Arr[j] && dp_r[j] + 1 > dp_r[i])
                dp_r[i] = dp_r[j] + 1;
        }
    }
    ans = 0;
    for(int i = 0; i <= n; i++)
    {
        if (ans < dp_l[i] + dp_r[i] - 1)
            ans = dp_l[i] + dp_r[i] - 1;
    }
    return ans;
}
int main() {
  int n;
  scanf("%d", &n);
  printf("%d", DP_bytonic(n));
  return 0;
}