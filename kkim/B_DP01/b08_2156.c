#include	<stdio.h>

int			ft_max(int a, int b)
{
    return	(a > b ? a : b);
}

int			main(void)
{
    int		N;
    int		i;
	int		arr[10001];
	int		dyp[10001];

    scanf("%d", &N);
    for (i=1; i<=N; i++)
        scanf("%d", &arr[i]);
    dyp[1] = arr[1];
    dyp[2] = arr[1] + arr[2];
    for (i=3; i<=N; i++)
        dyp[i] = ft_max(dyp[i - 2] + arr[i], ft_max(dyp[i - 3] + arr[i-1]+ arr[i], dyp[i - 1]));
    printf("%d", dyp[N]);
}
