#include	<stdio.h>

int			main(void)
{
	int		a;
	int		b;
	int		n;

	scanf("%d", &n);
	while (--n >= 0)
	{
		a = 0;
		b = 0;
		scanf("%d,%d", &a, &b);
		printf("%d\n", a + b);
	}
}