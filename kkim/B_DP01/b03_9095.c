#include	<stdio.h>

int			main(void) {
	int		dyp[11];
	int		all;
	int		num;

	dyp[0] = 1;
	dyp[1] = 2;
	dyp[2] = 4;
	scanf("%d", &all);
	for (int i=0; i<all; i++)
	{
		scanf("%d", &num);
		for (int j=3; j<num; j++)
			dyp[j] = dyp[j-3] + dyp[j-2] + dyp[j-1];
		printf("%d\n", dyp[num-1]);
	}
	return	(0);
}