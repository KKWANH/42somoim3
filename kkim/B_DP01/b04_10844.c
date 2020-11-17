#include	<stdio.h>

int			main(void)
{
    int		num;
    int		dyp[101][10] = {};
    int		sum;

	sum = 0;
    scanf("%d", &num);
    for (int i=0; i<10; i++)
        dyp[1][i] = 1;
    for (int i=2; i<=num; i++)
        for (int j=0; j<10; j++)
            if (j == 0)
                dyp[i][0] = dyp[i-1][1] % 1000000000;
            else if (j == 9)
                dyp[i][9] = dyp[i-1][8] % 1000000000;
            else
                dyp[i][j] = (dyp[i-1][j-1] + dyp[i-1][j+1]) % 1000000000;
    for (int i = 1; i < 10; i++)
        sum = (sum + dyp[num][i]) % 1000000000;
    printf("%d\n", sum % 1000000000);
}