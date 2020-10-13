#include	<stdio.h>

int			main(void)
{
    int		num;

    scanf("%d", &num);
    for (int idx=0; idx<num-1; idx++)
	{
		for (int jdx=0; jdx<num-idx-1; jdx++)
			printf(" ");
		printf("*");
		if (idx != 0)
		{
			for (int jdx=0; jdx<2*idx-1; jdx++)
				printf(" ");
			printf("*");
		}
		printf("\n");
    }
    for(int idx=0; idx<2*num-1; idx++)
		printf("*");
	printf("\n");
}