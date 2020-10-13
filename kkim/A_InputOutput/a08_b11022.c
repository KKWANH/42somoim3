#include	<stdio.h>

int			main(void)
{
	int		a;
	int		b;
	int		n;

	scanf("%d", &n);
	for (int i=0; i<n; i++)
	{
		a = 0;
		b = 0;
		scanf("%d%d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i + 1, a, b, a + b);
	}
}