#include	<stdio.h>

int			main(void)
{
	int		num;
	int		idx;

	idx = 1;
	scanf("%d", &num);
	while (idx <= num)
		printf("%d\n", idx++);
}