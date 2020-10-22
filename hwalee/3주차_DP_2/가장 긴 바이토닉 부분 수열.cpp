#include <iostream>
using namespace std;
int DP_up[1010];
int DP_down[1010];
int DP[1010];

int check_max(int* arr, int size)
{
	int max = arr[1];
	for (int i = 1; i <= size; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return (max);
}

int main()
{
	int n;
	int arr[1010];

	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	for (int i = 1; i <= n; i++)
	{
		DP_up[i] = 1;
		DP_down[i] = 1;
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (arr[i] > arr[j])
				if (DP_up[i] < DP_up[j] + 1)
					DP_up[i] = DP_up[j] + 1;
		}
	}

	for (int i = n; i >= 1; i--)
	{
		for (int j = n; j >= i; j--)
		{
			if (arr[i] > arr[j])
				if (DP_down[i] < DP_down[j] + 1)
					DP_down[i] = DP_down[j] + 1;
		}
	}

	for (int i = 1; i <= n; i++)
		DP[i] = DP_up[i] + DP_down[i] - 1;

	printf("%d", check_max(DP, n));

}
