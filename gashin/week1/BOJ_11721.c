#include <stdio.h>

int	main()
{
	char	str[101];
	int		j;
	
	scanf("%s", str);
	for (int i = 1; i <= 10; i++) {
		for (j = 10 * (i - 1); j < (10 * i) && str[j] != '\0'; j++) {
			printf("%c", str[j]);
		}
		if (str[j] == '\0')
			return 0;
		printf("\n");
	}
	return 0;
}