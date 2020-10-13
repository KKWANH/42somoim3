#include	<stdio.h>

int			main(void)
{
	int		num;

	scanf("%d", &num);
	for (int idx=1; idx<=num; ++idx) {
		for (int jdx=1; jdx<=num-idx; ++jdx) {
			printf(" ");
		}
		for (int jdx=1; jdx<=idx; ++jdx) {
			printf("* ");
		}
		printf("\n");
	}
}