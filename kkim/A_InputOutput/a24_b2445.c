#include	<stdio.h>

int			main(void)
{
	int		num;

	scanf("%d", &num);
	for (int idx=1; idx<=num; idx++)
	{
		for (int jdx=idx; 				jdx>0; jdx--) printf("*");
		for (int kdx=(2*num)-(2*idx);	kdx>0; kdx--) printf(" ");
		for (int ldx=idx;				ldx>0; ldx--) printf("*");
		printf("\n");
	}
	for (int idx=num-1; idx>0; idx--) {
		for (int jdx=idx; 				jdx>0; jdx--) printf("*");
		for (int kdx=(2*num)-(2*idx);	kdx>0; kdx--) printf(" ");
		for (int ldx=idx;				ldx>0; ldx--) printf("*");
		printf("\n");
	}
	return 0;
}