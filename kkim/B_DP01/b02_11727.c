#include	<stdio.h>

int			main(void)
{
	int		num;
	int		arr[1001] = {0, };

	scanf("%d", &num);
	arr[0] = 1;
	arr[1] = 1;
	for(int idx=2; idx<=num; idx++)
		arr[idx] = (arr[idx - 2] * 2 + arr[idx - 1]) % 10007;
	printf("%d", arr[num] % 10007);
}