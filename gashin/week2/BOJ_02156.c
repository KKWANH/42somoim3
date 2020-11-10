#include <stdio.h>

int arr[10001], dp[10001];

int MAX(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int n;
    int i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &arr[i]);
    dp[1]= arr[1];
    dp[2] = arr[1] + arr[2];
    for (i = 3; i <= n; i++)
    {
        dp[i] = MAX(dp[i - 2] + arr[i], MAX(dp[i - 3] + arr[i - 1] + arr[i], dp[i - 1]));
    }
    printf("%d", dp[n]);
}