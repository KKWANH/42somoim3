#include <iostream>
using namespace std;
int DP[100001] = { 0, };
#define MAX(a, b) a > b ? a : b

int check_max(int* arr, int size)
{
	int max = arr[1];
	for (int i = 2; i <= size; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return (max);
}

int main()
{
	int n;
	int arr[100001] = { 0, };
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		scanf("%d", &arr[i]);
	DP[1] = arr[1];
	for (int i = 2; i <= n; i++)
		DP[i] = MAX(DP[i - 1] + arr[i], arr[i]);
	printf("%d", check_max(DP, n));
}
