#include	<stdio.h>

int			main(void)
{
	int		num;

	scanf("%d", &num);
	for (int idx=0; idx<num; idx++) {
		for (int jdx=0; jdx<num - idx; jdx++)
			printf("*");
		printf("\n");
	}
}