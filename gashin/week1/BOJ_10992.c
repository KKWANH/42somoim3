#include <stdio.h>

int	main()
{
	int	n;
	
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <= n - 1; j++)
		{
			printf(" ");
		}
		for (int j = 1; j <= (i * 2) - 1; j++)
		{
			if (j == 1 || j == (i * 2) - 1 || i == n)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}