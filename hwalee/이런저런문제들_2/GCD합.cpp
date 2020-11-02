#include <iostream>
#include <stdlib.h>
using namespace std;

int	GCD(int a, int b)
{
	if (a % b == 0)
		return (b);
	return (GCD(b, a % b));
}

int main()
{
	int t, n;
	int* arr;
	unsigned long long res;

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		res = 0;
		arr = (int*)malloc(sizeof(int) * n);
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
				res += (long long)GCD(arr[i], arr[j]);
		}
		printf("%lld\n", res);
		free(arr);
	}
	return (0);
}
