#include	<stdio.h>
 
int			main(void)
{
	int		num;
	int		arr[1000001] = {0, };

	scanf("%d", &num);

	if (num == 1)
		printf("0");
	else
	{
		for (int idx=2; idx<=num; idx++)
		{
			arr[idx] = arr[idx - 1] + 1;
			if(idx % 2 == 0)
				arr[idx] = ((arr[idx] <= arr[idx/2] + 1) ? (arr[idx]) : (arr[idx/2] + 1));
			if(idx % 3 == 0)
				arr[idx] = ((arr[idx] <= arr[idx/3] + 1) ? (arr[idx]) : (arr[idx/3] + 1));
		}
		printf("%d", arr[num]);
	}
	return (0);
}
