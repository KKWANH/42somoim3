// 실패

#include	<stdio.h>
#include	<stdlib.h>

int			main(void)
{
	char	*str;
	int		idx;
	int		*alp;

	scanf("%s", str);
	idx = 0;
	alp = (int *)malloc(sizeof(int) * 26);

	idx = 0;
	while (str[idx])
		alp[(int)str[idx++] - 97]++;
	
	idx = 0;
	while (idx < 26)
		printf("%d ", alp[idx++]);
	
	return (0);
}