#include <iostream>
using namespace std;
#define MAX(a,b) (a > b ? a : b);
int DP[10001] = { 0, };

int main()
{
	int arr[10001] = { 0, };
	int n;
	int temp;

	cin >> n;
	for (int i = 1; i <= n; i++)
		scanf("%d", &arr[i]);
	DP[0] = 0;
	DP[1] = arr[1];
	DP[2] = arr[2] + arr[1];
	for (int i = 3; i <= n; i++)
	{
		temp = MAX(DP[i - 2] + arr[i], DP[i - 3] + arr[i - 1] + arr[i]);
		DP[i] = MAX(DP[i - 1], temp);
	}
	printf("%d\n", DP[n]);
}
