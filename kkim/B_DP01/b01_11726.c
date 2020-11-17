#include	<stdio.h>
 
int			main(void)
{
	int		num;
	int		arr[1010] = {0, };

	scanf("%d", &num);
	arr[0] = 1;
	arr[1] = 1;
	for(int idx=2; idx<=num; idx++)
		arr[idx] = (arr[idx - 1] + arr[idx - 2]) % 10007;
	printf("%d\n", arr[num] % 10007);
}
