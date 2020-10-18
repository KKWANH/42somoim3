#include	<stdio.h>

int			main(void)
{
	int		num;
	int		rst;

	rst = 0;
	scanf("%d", &num);
	while (num > 0)
		rst += num--;
	printf("%d", rst);
}