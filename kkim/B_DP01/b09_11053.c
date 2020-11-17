#include	<stdio.h>

int			main()
{
	int		arr[1001];
	int		dyp[1001];
	int		nm1;
	int		nm2;
	int		min;
	int		max;

	min = 0;
	max = 0;
	scanf("%d", &nm1);
	for (int idx = 0; idx<nm1; idx++)
	{
		dyp[idx] = 1;
		min=0;
		scanf("%d", &arr[idx]);
		for (int jdx=0; jdx<idx; jdx++)
			if (arr[idx] > arr[jdx] && min < dyp[jdx])
				min = dyp[jdx];
		dyp[idx] = min + 1;
		if (max < dyp[idx])
			max = dyp[idx];
	}
	printf("%d", max);
}
