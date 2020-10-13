#include	<stdio.h>

int			main(void)
{
	int		num;
	int		min;
	int		max;
	int		tmp;

	tmp = 0;
	min = 1000001;
	max = -1000001;
	scanf("%d", &num);
	for (int idx=0; idx<num; idx++)
	{
		scanf("%d", &tmp);
		if (tmp < min)
			min = tmp;
		if (tmp > max)
			max = tmp;
	}
	printf("%d %d", min, max);
}