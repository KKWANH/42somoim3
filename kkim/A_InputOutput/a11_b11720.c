#include	<stdio.h>
#include	<stdlib.h>

int			main()
{
    int		num;
	int		sum;
	char	*arr;
	
	sum = 0;
    scanf("%d", &num);
	arr = (char *)malloc(sizeof(char) * num);
    scanf("%s", arr);
    for(int idx=0; idx<num; idx++)
        sum += arr[idx] - '0';
    printf("%d", sum);
}