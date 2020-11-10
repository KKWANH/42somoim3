#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a_arr[26];
	char str[100];
	int i, j;
	scanf("%s", str);
	for (int i = 0; i < 26; i++)
		a_arr[i] = -1;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = str[i] - 'a';
			if (a_arr[j] == -1)
				a_arr[j] = i;
		}
		i++;
	}
	for (i = 0; i < 26; i++)
		printf("%d ", a_arr[i]);
}
