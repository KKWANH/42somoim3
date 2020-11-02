#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int ft_square(int size)
{
	int res = 1;
	for (int i = 0; i < size; i++)
		res *= 10;
	return (res);
}
int main()
{
	char	A[8], B[8], C[8], D[8];
	long long		a, b;

	cin >> A >> B >> C >> D;
	a = (long long)atoi(A) * ft_square(strlen(B)) + atoi(B);
	b = (long long)atoi(C) * ft_square(strlen(D)) + atoi(D);
	cout << a + b << endl;
}
