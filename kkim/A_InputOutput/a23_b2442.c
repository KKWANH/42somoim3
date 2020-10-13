#include	<stdio.h>

int			main(void)
{
	int		num;

	scanf("%d", &num);
	for (int idx=1; idx<=num; idx++)
	{
		for (int jdx=num; jdx>idx; jdx--)
			printf(" ");
		for (int jdx=0; jdx<2*idx-1; jdx++)
			printf("*");
		printf("\n");
	}
}