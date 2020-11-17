#include	<stdio.h>

#define		num	10007

int			main(void)
{
	int		inp;
	int		dyp[1001][10] = {0,};
	int		out = 0;
	int		sum;

	scanf("%d", &inp);
	for(int i=0; i<=9; i++)
		dyp[1][i] = 1;
	for(int i=2; i<=inp; i++)
		for(int j=0; j<=9; j++)
		{
			sum = 0;
			for(int k=j;k<=9;k++)
				sum += dyp[i-1][k] % num;
			dyp[i][j] = sum % num;
		}
	for(int k=0;k<=9;k++)
		out += dyp[inp][k] % num;
	printf("%d", out % num);
}