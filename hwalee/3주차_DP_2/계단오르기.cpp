#include <iostream>
#define MAX(a, b) a > b ? a : b
using namespace std;
long long DP[305] = { 0, };

void check_max(long long* arr, int size)
{
	if (size > 4)
		check_max(arr, size - 1);
	DP[size] = MAX(DP[size - 2] + arr[size], DP[size - 3] + arr[size - 1] + arr[size]);
}

int main()
{
	int n;
	cin >> n;
	long long arr[305] = { 0, };

	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	DP[1] = arr[1];
	DP[2] = arr[1] + arr[2];
	DP[3] = MAX(DP[1] + arr[3], arr[2] + arr[3]);
	if (n <= 3)
	{
		printf("%d", DP[n]);
		return (0);
	}
	check_max(arr, n);
	printf("%d ", DP[n]);
	return (0);
}
