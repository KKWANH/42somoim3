#include	<stdio.h>

int			main(void)
{
	int		num;

	scanf("%d", &num);
	for (int idx=num; idx>0; idx--) {
		for (int jdx=num; jdx>idx; jdx--)
			printf(" ");
		for (int jdx=0; jdx<idx; jdx++)
			printf("*");
		printf("\n");
	}
}