#include	<stdio.h>

int			ft_max(int a, int b)
{
	return a > b ? a : b;
}

int			main(void)
{
	int		i;
	int		j;
	int		n;
	int		t;

	scanf("%d", &t);
	while (t-- > 0)
	{
		scanf("%d", &n);
		int d[2][100001], a[2][100001];
		for (i = 0; i <= 1; i++)
			for (j = 1; j <= n; j++) 
				scanf("%d", &a[i][j]);
		d[0][0] = d[1][0] = 0;
		d[0][1] = a[0][1];
		d[1][1] = a[1][1];
		for (i = 2; i <= n; i++)
		{
			d[0][i] = ft_max(d[1][i - 1], d[1][i - 2]) + a[0][i];
			d[1][i] = ft_max(d[0][i - 1], d[0][i - 2]) + a[1][i];
		}
		printf("%d\n",ft_max(d[0][n], d[1][n]));
	}
}