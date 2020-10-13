#include	<stdio.h>

int			main(void)
{
	int		num;

	scanf("%d", &num);
	for (int idx=1; idx<=9; idx++)
		printf("%d * %d = %d\n", num, idx, num*idx);
}