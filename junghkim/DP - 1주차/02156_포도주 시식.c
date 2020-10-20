#include <stdio.h>

int max(int a, int b, int c)
{
    int max;

    max = a;
    if (max < b)
        max = b;
    if (max < c)
        max = c;
    return (max);
}

int main(void)
{
    int DP[2][10001];
    int i, j;

    scanf("%d", &i);
    j = 0;
    while (++j <= i)
        scanf("%d", &DP[0][j]);
    DP[1][1] = DP[0][1];
    DP[1][2] = DP[0][1] + DP[0][2];
    j = 2;
    while (++j <= i)
        DP[1][j] = max(DP[1][j - 2] + DP[0][j], DP[1][j - 3] + DP[0][j - 1] + DP[0][j], DP[1][j - 1]);
    printf("%d", DP[1][i]);
}