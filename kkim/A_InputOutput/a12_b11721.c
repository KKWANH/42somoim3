#include	<stdio.h>

int			main(void)
{
	char	str[100];
	int		idx;

	scanf("%s", str);
	idx = 0;
	while (str[idx])
	{
		printf("%c", str[idx]);
		if ((idx + 1) % 10 == 0)
			printf("\n");
		++idx;
	}
}