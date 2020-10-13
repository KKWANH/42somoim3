#include	<stdio.h>

int			main(void)
{
	int		num;

	scanf("%d", &num);
	for (int idx=1; idx<=num; idx++) {
		for (int jdx=idx-1;				jdx>0; jdx--) printf(" ");
		for (int kdx=(2*num)-(idx*2)+1;	kdx>0; kdx--) printf("*");
		printf("\n");
	}
	for (int idx=num-1; idx>0; idx--) {
		for (int jdx=idx-1;				jdx>0; jdx--) printf(" ");
		for (int kdx=(2*num)-(idx*2)+1;	kdx>0; kdx--) printf("*");
		printf("\n");
	}
	return 0;
}