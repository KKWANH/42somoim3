#include <stdio.h>

void	ft_gcd(int N, int X)
{
	int go;
	go = N % X;
	if (N / X != 0)
		ft_gcd(N / X, X);
	if (go < 10)
		printf("%c", go + '0');
	else
		printf("%c", go - 10 + 'A');	
}

int main()
{
	int N;
	int X;
	scanf("%d %d",&N, &X);	
	ft_gcd(N, X);
	printf("\n");
	return (0);
}
