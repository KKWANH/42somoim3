#include			<stdio.h>

int					main(void)
{
	long long int	dyp[92];
	int				num;

	dyp[0] = 0;
	dyp[1] = 1;
	dyp[2] = 0;
	scanf("%d", &num);
	for (int i=2; i<=num; i++)
		dyp[i] = dyp[i-2] + dyp[i-1];
	printf("%lld", dyp[num]);
}